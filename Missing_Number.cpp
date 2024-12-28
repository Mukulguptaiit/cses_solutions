#include <iostream>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    unsigned long long int t;
    cin >> t;
    unsigned long long int sum=t*(t+1)/2;
    unsigned long long int i=0;
    t--;
    while (t--) {
        cin>>i;
        sum-=i;
    }
    cout<<sum;
    return 0;
}
