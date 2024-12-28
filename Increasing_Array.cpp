#include <iostream>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    unsigned long long int sum=0;
    int i=0;
    while (t--) {
        int j;
        cin>>j;
        if(j<i)sum+=i-j;
        else i=j;
    }
    cout<<sum;
    return 0;
}
