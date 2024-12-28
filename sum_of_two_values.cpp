#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, x;
    cin >> n >> x;
    unordered_map<int, int> mp;  // Stores the first occurrence index of each number
 
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        if(k>=x){
            continue;
        }
        int key = x - k;
        // Check if the complement exists in the map
        if (key>0 && mp.find(key) != mp.end()) {
            cout << mp[key] + 1 << ' ' << i + 1 << endl;  // Found a pair, print indices
            return 0;  // Exit after finding one valid pair
        }
 
        // Store the index of the first occurrence of this number
        if (mp.find(k) == mp.end()) {
            mp[k] = i;
        }
    }
 
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
