#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a=0;
        int b=0;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='U'){
                b++;
            }
            if(s[i]=='D'){
                b--;
            }
            if(s[i]=='R'){
                a++;
            }
            if(s[i]=='L'){
                a--;
            }
            if(a==1&&b==1){
                count++;
            }


        }
        if(count>=1){
            cout<<"YES"<<endl;


        }
        else{
            cout<<"No"<<endl;
        }

    }









}
