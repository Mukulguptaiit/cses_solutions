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
    int k=arr[n/2];
    long long cost=0;
    for(int i=0;i<n;i++){
        cost+=abs(arr[i]-k);
    }
    cout<<cost;
    return 0;
}
