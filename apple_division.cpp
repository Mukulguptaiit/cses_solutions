#include <climits>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    long long sum = 0;
    vector<int> weights(n);
    for (int i = 0; i < n; ++i) {
        cin >> weights[i];
        sum += weights[i];
    }
    
    long long mn = LLONG_MAX;
    for (int i = 0; i < (1 << n); i++) {
        long long sem = 0;
        for (int k = 0; k < n; k++) {
            if (1 & (i >> k)) {
                sem += weights[k];
            }
        }
        mn = min(mn, abs(sum - 2 * sem));
    }
    
    cout << mn << endl;
    return 0;
}
