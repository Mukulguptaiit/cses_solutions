#include <iostream>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    string s;
    cin>>s;
    char prev='#';
    int count=0;
    for(char a:s){
        if(prev=='#'){
            prev=a;
            count++;
            continue;
        }if(prev==a){
            count++;
        }else{
            prev=a;
            t=max(count,t);
            count=1;
        }
    }
    cout<<max(count,t);
    return 0;
}