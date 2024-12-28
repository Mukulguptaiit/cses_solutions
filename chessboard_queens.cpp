#include <bits/stdc++.h>
using namespace std;
 
int placequeen(vector<vector<bool>>& vim, int queen) {
    if (queen == 8) {
        return 1;
    }
    int count = 0;
    for (int j = 0; j < 8; j++) {
        if (!vim[queen][j]) {
            vector<vector<bool>> vp = vim;
            for (int x = 0; x < 8; x++) {
                for (int y = 0; y < 8; y++) {
                    if (x == queen || y == j || abs(x - queen) == abs(y - j)) { 
                        vp[x][y] = 1;
                    }
                }
            }
            count += placequeen(vp, queen + 1);
        }
    }
    return count;
}
 
int main() {
    vector<vector<bool>> vim(8, vector<bool>(8, 0));
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            char p;
            cin >> p;
            if (p == '*') {
                vim[i][j] = 1;
            }
        }
    }
    cout << placequeen(vim, 0);
    return 0;
}
