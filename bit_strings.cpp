#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int t=n/28;
    int p=n%28;
    unsigned long long int k=1;
    while(t--){
        k=(k*(1ULL<<(28)))%1000000007;
    }
    if(p){
         k=(k*(1ULL<<(p)))%1000000007;
    }
    cout<<k;
    return 0;
}
