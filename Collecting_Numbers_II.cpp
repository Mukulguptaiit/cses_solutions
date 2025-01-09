#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,m;
    cin >>n>>m;
    vector<int> arr(n+2);
    unordered_map<int,int> mp;
    for(int i=1;i<n+1;i++){
        cin>>arr[i];
        mp.insert({arr[i],i});
    }
    arr[0]=0;
    arr[n+1]=n+1;
    mp[n+1]=n+1;
    mp[0]=0;
    int count=1;
    for(int i=1;i<n+1;i++){
        if(mp[arr[i]]<mp[arr[i]-1]){
            count++;
        }
    }
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        if(x>y){
            int temp=x;
            x=y;
            y=temp;
        }
        
        if((x<mp[arr[x]+1] && mp[arr[x]+1]<=y)){
            count++;
        }
        if((y>mp[arr[y]-1] && mp[arr[y]-1]>=x)){
count++;
        }
        if(            (y>mp[arr[y]+1] && mp[arr[y]+1]>=x)){
            count--;
        }
        if(
 
            (x<mp[arr[x]-1] && mp[arr[x]-1]<=y)
        ){
            count--;
        }
        if(arr[x]==arr[y]+1){
            count++;
        }
        if(arr[x]==arr[y]-1){
            count--;
        }
        {
        int temp=mp[arr[x]];
        mp[arr[x]]=mp[arr[y]];
        mp[arr[y]]=temp;
        swap(arr[x],arr[y]);}
 
        cout<<count<<endl;
    }
    return 0;
