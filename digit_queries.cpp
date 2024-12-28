#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        
        long long less = 9;
        int count = 1;
        while (x > less * count) {
            x -= less * count;
            less *= 10;
            count++;
        }
        long long quo = (x - 1) / count;
        int remain = (x - 1) % count;
 
        long long number = less / 9 + quo;
 
        string s = to_string(number);
        cout << s[remain] << endl;
    }
    
    return 0;
}
