#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        int n=s.size();
   

       int d=s[0]-'0';
        
        if(n==1){
            cout<<((d-1)*10)+1<<endl;
        }
        if(n==2){
            cout<<((d-1)*10)+3<<endl;
        }
            if(n==3){
            cout<<((d-1)*10)+6<<endl;
        }
            if(n==4){
            cout<<((d-1)*10)+10<<endl;
        }
    }
}