#include <iostream>
#include <list>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        unsigned long long int x,y;
        cin>>x>>y;
        unsigned long long int t=0;
        unsigned long long int p=max(x,y);
        if(p>0){
            t=(p-1)*(p-1);
        }
        cout<<t+((x==y)?y:(x>y)?((x&1)?y:(2*x-y)):(y&1)?(2*y-x):x);
        cout<<endl;
    }
    return 0;
}
