#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string t;
    string l;
    if(s[0]>=97){
       t= toupper(s[0]);


         cout<<t;
                 for(int i=1;i<s.length();i++){
           l= tolower(s[i]);
           cout<<l;
      }

    }

     for(int j=0;j<s.length();j++){
     if(s[j]<=97){
        string m;
        m=tolower(s[j]);
        cout<<m;
    }

    }















}
