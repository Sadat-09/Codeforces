#include<bits/stdc++.h>
using namespace std;

int main(){
    int a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;

    string s;
    cin>>s;

    int ansr=0;

    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            ansr=ansr+a1;
        }
        if(s[i]=='2'){
            ansr=ansr+a2;
        }
        if(s[i]=='3'){
            ansr=ansr+a3;
        }
        if(s[i]=='4'){
            ansr=ansr+a4;
        }
    }
 cout<<ansr;









}
