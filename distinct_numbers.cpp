#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    int co=0;
    set<int> s;
    while(t--){
        int x;
        cin>>x;
        if(s.find(x)==s.end()){
        s.insert(x);
        co++;
        }
    }cout<<co;
    return 0;
}
