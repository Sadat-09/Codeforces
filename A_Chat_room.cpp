#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string str="hello";
    int n=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==str[n]){
            n++;
        }
    }
    if(n>4){
        cout<<"YES";

    }
    else{
        cout<<"NO";
    }















}