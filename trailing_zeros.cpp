#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    int count2=0;
    int count5=0;
    for(int i=5;t/i>=1;i*=5){
        count5+=t/i;
    }
    for(int i=2;t/i>=1;i*=2){
        count2+=t/i;
    }
    cout<<min(count5,count2);
    return 0;
}