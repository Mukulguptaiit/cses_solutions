#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    string s;
    cin>>s;
    unordered_map<char,int> mp;
    for(auto c:s){
        if(mp.find(c)==mp.end()){
            mp[c]=1;
        }else{
            mp[c]++;
        }
    }
    s="";
    char one='#';
    for(auto t:mp){
        if(t.second & 1){
            if(one=='#'){
                one=t.first;
            }
            else{
                cout << "NO SOLUTION" << endl;
                return 0;
            }
        }
        mp[t.first]=t.second/2;
    }
    for(auto t:mp){
        if(t.second){
            string repeatedChar(t.second,t.first);
            s+=repeatedChar;
        }
    }
    string s2=s;  
    if(one!='#')s+=one;
    reverse(s2.begin(),s2.end());
    s+=s2;
    cout<<s;
    return 0;
}