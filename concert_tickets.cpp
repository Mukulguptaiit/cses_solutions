#include <bits/stdc++.h>
using namespace std;
 
int main() {
    multiset<int> tickets;
    int n, m;
    cin >> n >> m;
 
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        tickets.insert(t);
    }
 
    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;
        auto it = tickets.upper_bound(t);
 
        if (tickets.empty() || it == tickets.begin()) {
            cout << -1 << endl;
        } else {
            --it;
            cout << *it << endl;
            tickets.erase(it); 
        }
    }
 
    return 0;
}
