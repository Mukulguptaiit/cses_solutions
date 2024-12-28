#include <iostream>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    if(t==1){
        cout<<1;
        return 0;
    }
    if(t<4){
        cout<<"NO SOLUTION";
        return 0;
    }
    int i=2;
    while(i<=t){
        cout<<i<<' ';
        i+=2;
    }i=1;
    while(i<=t){
        cout<<i<<' ';
        i+=2;
    }
    return 0;
}
