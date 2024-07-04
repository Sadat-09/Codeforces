#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        char c;
        cin>>c;
        bool found =false;
        string s="codeforces";
        for(int i=0;i<s.size();i++){
            if(s[i]==c){
              found=true;
                break;
            }



        }
        if(found){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }

    }











}
