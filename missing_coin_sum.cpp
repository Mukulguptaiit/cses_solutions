#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long int coin=0;
    for(int i=0;i<n;i++){
        if(arr[i]>coin+1){
            break;
        }coin+=arr[i];
    }cout<<coin+1;
    return 0;
}