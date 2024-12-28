#include <bits/stdc++.h>
#include <string>
using namespace std;
void recursion(string& t , set<string>& s,int n){
    if(s.find(t)!=s.end()){
        return;
    }
    s.insert(t);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            string p=t;
            swap(p[i],p[j]);
            recursion(p, s, n);
        }
    }
}
int main() {
    string t;
    cin>>t;
    sort(t.begin(),t.end());
    int n=t.size();
    vector<int> alpa(26 ,0);
    for(char c:t){
        alpa[c-'a']++;
    }
    int k=tgamma(n+1);
    for(auto a:alpa){
        if(a>1){
            k=k/tgamma(a+1);
        }
    }
    cout<<k<<endl;
    set<string> s;
    recursion(t, s, n);
    for(string p:s){
        cout<<p<<endl;
    }
    return 0;
}
