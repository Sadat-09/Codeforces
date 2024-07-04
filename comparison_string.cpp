#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){
    Faster;
   int t;
   cin>>t;
   while(t--){
    int n; cin>>n;
    string s; cin>>s;
    int ansr=0;
    int cons=0;

    for(int i=0;i<n;i++){
        cons++;

        if(i=n-1||s[i]!=s[i+1]){
            ansr=max(ansr,cons);
            cons=0;
        }

    }
    cout<<(ansr+1)<<endl;
   }
   return 0;

}