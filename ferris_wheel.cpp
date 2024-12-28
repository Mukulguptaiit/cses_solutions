#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x;
    std::cin >> n >> x;
    multiset<int> s;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        s.insert(k);
    }
    int co=0;
    while(!s.empty()){
        co++;
        auto it=s.begin();
        int p=*it;
        s.erase(it);
        it=s.upper_bound(x-p);
        if(it!=s.begin()){
            it--;
            s.erase(it);
        }
 
    }
    cout<<co;
    return 0;
}
