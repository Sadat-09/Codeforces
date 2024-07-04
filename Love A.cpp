#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    int c1=0,c2=0;

    for(int i=0;i<s.size();i++){
        if(s[i]=='a'){
            c1++;


        }
        else {
            c2++;
        }






    }
    if(c1>c2){
            cout<<s.size();
        }
        else{
            cout<<2*c1-1;
        }















}
