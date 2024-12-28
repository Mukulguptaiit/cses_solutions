#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<pair<int,int>> v;;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back({b,a});
    }
    sort(v.begin(),v.end());
    int cou=0;
    int prev_end=0;
    for(auto p:v){
        int new_start=p.second;
        int new_end=p.first;
        if(new_start>=prev_end){
            prev_end=new_end;
            cou++;
        }
    }
    cout<<cou;
    return 0;
}
