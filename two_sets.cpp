#include <bits/stdc++.h>
using namespace std;
 
int main() {
    unsigned long long int n;
    cin >> n;
    unsigned long long int ans=1LL * n *(n+1)/2;
    if(ans&1){
        cout<<"NO";
        return 0;
    }
    cout<<"YES\n";
    unordered_set<int> s1;
    unordered_set<int> s2;
    ans=ans/2;
    for(unsigned long long int i=n;i>0;i--){
        if(ans>=i){
            ans-=i;
            s1.insert(i);
        }else{
            s2.insert(i);
        }
    }
    cout<<s1.size()<<endl;
    for(auto s:s1){
        cout<<s<<" ";
    }cout<<endl;
    cout<<s2.size()<<endl;
    for(auto s:s2){
        cout<<s<<" ";
    }
    return 0;
}