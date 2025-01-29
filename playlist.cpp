#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    long long  arr[t];
    long long  p=t;
    while(t--){
        cin>>arr[t];
    }
    long long count=1;
    map<long long ,long long > s;
    s[arr[0]]=0;
    long long  i=0;
    long long  j=1;
    while(j<p){
        if(s.find(arr[j])==s.end()){
            s[arr[j]]=j;
            j++;
        }else{
            if(s[arr[j]]>=i)i=s[arr[j]]+1;
            s[arr[j]]=j;
            j++;
        }
        count=max(count,j-i);
    }cout<<count;
    return 0;
}