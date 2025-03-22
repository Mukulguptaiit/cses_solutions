#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("unroll-loops", "O3")
struct Data{
    int x,y,z;
    Data(){
        x=0;
        y=0;
        z=0;
    }
};

bool comparitor(const Data &a,const Data &b){
    return a.x!=b.x ? a.x<b.x : a.y>b.y;
}
int main() {
    int n;
    cin>>n;
    vector<Data> mp(n);
    for(int i=0;i<n;i++){
        cin>>mp[i].x>>mp[i].y;
        mp[i].z= i;
    }
    sort(mp.begin(),mp.end(),comparitor);
    vector<int> contains(n,0);
    vector<int> contained(n,0);
    int minim=INT_MAX;
    // for(int i=0;i<n;i++){
    //     cout<<mp[i].x<<mp[i].y<<mp[i].z<<endl;
    // }
    for(int i=n-1;i>=0;i--){
        if(mp[i].y>=minim){
            contains[mp[i].z]=true;
        }minim = min(minim,mp[i].y);
    }
    int maxim= 0;
    for(int i=0;i<n;i++){
        if(mp[i].y<=maxim){
            contained[mp[i].z]=true;
        }maxim = max(maxim,mp[i].y);
    }
    for(int i=0;i<n;i++){
        cout<<contains[i]<<' ';
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        cout<<contained[i]<<' ';

    }
    return 0;
}
