#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a, b;
        cin >> a >> b;
 
        // Ensure a >= b for simplicity
        if (a < b) swap(a, b);
 
        // Check if the piles can be emptied
        if ((a + b) % 3 == 0 && a <= 2 * b) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
 
    return 0;
}