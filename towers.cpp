#include <bits/stdc++.h>
using namespace std;

using ll = long long ;
// #define si size()
#define pb push_back


int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; 
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
	    int t;
	    cin>>t;
	    int hi=v.size();
	    int lo=0;
	    while(lo<hi){
	        int mid =(hi+lo)/2;
	        if(v[mid]<=t){
	            lo = mid+1;
	            continue;
	        }else{
	            hi=mid;
	        }
	    }if(lo==v.size()){
	        v.pb(t);
	    }else{
	        v[lo]=t;
	    }
	}cout<<v.size();
    return 0;
}