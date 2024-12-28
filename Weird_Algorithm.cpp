#include <iostream>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    unsigned long long int t;
    cin >> t;
 
    while (true) {
        cout<<t<<' ';
        if(t==1)break;
        if(t&1){
            t=t*3+1;
            continue;
        }t/=2;
    }
    return 0;
}
