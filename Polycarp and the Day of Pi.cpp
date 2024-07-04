#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int count=0;

    while(t--){
        string s;
        cin>>s;
        string p="314159265358979323846264338327";
        for(int i=0;i<s.size();i++){
            if(s[i]==p[i]){
                count++;
            }
            else{

                break;
            }


        }
        cout<<count<<endl;

    }
    return 0;






















}
