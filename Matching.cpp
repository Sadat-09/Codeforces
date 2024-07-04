
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        int ansr=1;
        if(s[0]=='0'){
            cout<<0<<endl;
            continue;
        }
        else if(s[0]=='?'){
            ansr=9;
        }

        for(int i=1;i<s.size();i++){
            if(s[i]=='?'){
                ansr*=10;
            }
        }
        cout<<ansr<<endl;
    }
}
