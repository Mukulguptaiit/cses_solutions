#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    long long int ma=INT_MIN;
    long long int ct=0;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        ct=max((long long int)t,ct+t);
        ma=max(ct,ma);
    }
    cout<<ma;
    return 0;
}
