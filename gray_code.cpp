#include <bits/stdc++.h>
using namespace std;
 
void generateGrayCode(int n, unordered_set<string> &se, string &s) {
    if (se.find(s) != se.end()) {
        return;
    }
    cout << s << endl;
    se.insert(s);
 
    for (int i = 0; i < n; i++) {
        string p = s;
        p[i] = p[i] == '0' ? '1' : '0'; // Flip the i-th bit
        generateGrayCode(n, se, p);
    }
}
 
int main() {
    int n;
    cin >> n;
    string s(n, '0');
    unordered_set<string> se;
    generateGrayCode(n, se, s);
    return 0;
}
