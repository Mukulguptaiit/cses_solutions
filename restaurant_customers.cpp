#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<pair<int,bool>> v;;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back({a,1});
        v.push_back({b,0});
    }
    sort(v.begin(),v.end());
    int ma=INT_MIN;
    int cou=0;
    for(auto p:v){
        if(p.second){
            cou++;
        }else{
            cou--;
        }
        ma=max(ma,cou);
    }
    cout<<ma;
    return 0;
}