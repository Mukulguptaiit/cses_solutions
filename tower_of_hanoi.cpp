#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
void recursion(int n ,int left , int middle , int right) {
    if(n==1){
        cout<<left<<' '<<right<<endl;
        return;
    }
    recursion(n-1,left,right,middle);
    cout<<left<<' '<<right<<endl;
    recursion(n-1,middle,left,right);
    return ;
}
 
int main() {
    int n;
    cin >> n;
    cout<<(1<<n)-1<<endl;
    recursion(n,1,2,3);
    return 0;
}