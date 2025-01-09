#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vs(n+1,0);
    
    for(int i=1;i<n+1;i++){
        int temp;
        cin>>temp;
        vs[temp]=i;
    }
    int count=0;
    for(int i=2;i<n+1;i++){
        if(vs[i-1]>vs[i]){
            count++;
        }
    }
    cout<<count+1;
    return 0;
}