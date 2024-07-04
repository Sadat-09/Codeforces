#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    bool o=false;
    int zero=0;

    for(int i=s.size()-1;i>=0;i++){
        if(s[i]=='0'){
            s.pop_back();
        }
        else{
            break;
        }
    }

    for(int i=0;i<s.size();i++){
        if(s[i]=='1') o=true;

        if(o &&s[i]=='0'){
            zero++;
        }
    }
    cout<<zero;
}