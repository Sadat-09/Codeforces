#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
        if(n%2==0){
            cout<<"yes"<<endl;

        }
        else if(2+k==n){
            cout<<"Yes"<<endl;
        }
         else if(k==n){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}
