#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, k;
    std::cin >> n >> m >> k;
    std::vector<int> applicants(n);
    std::vector<int> apartments(m);
 
    for (int i = 0; i < n; ++i) {
        std::cin >> applicants[i];
    }
 
    for (int i = 0; i < m; ++i) {
        std::cin >> apartments[i];
    }
 
    std::sort(applicants.begin(), applicants.end());
    std::sort(apartments.begin(), apartments.end());
 
    int i = 0, j = 0, matches = 0;
    for(int i=0;i<n;i++){
        while (j < m) {
            if (std::abs(applicants[i] - apartments[j]) <= k) {
                ++matches;
                ++j;
                break;
            } else if (apartments[j] < applicants[i] - k) {
                ++j;
            }else{
                break;
            }
        }
    }
    std::cout << matches << std::endl;
 
    return 0;
}
