#include<bits/stdc++.h>
using namespace std;

int main(){
       string s1="qwertyuiopasdfghjkl;zxcvbnm,./";
    string s2;
    cin>>s2;
    string s3;
    cin>>s3;
    int ans;

    for(int i=0;i<s3.size();i++){

            ans=s1.find(s3[i]);

            if(s2=="R"){
                cout<<s1[ans-1];
            }
            else{
                cout<<s1[ans+1];
            }

    }












}
