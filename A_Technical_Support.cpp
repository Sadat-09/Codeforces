#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        int q=0;
        cin>>n;
        char arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
         for(int i=0;i<n;i++){
            if(arr[i]=='Q'){
                q++;
            }
           else if(arr[i]=='A'){
                q--;
            }
           
        }
        if(q==0){
            cout<<"Yes"<<endl;
        }
        else if(q<0){
            q=0;
        }
        else if(q>0) {
            cout<<"No"<<endl;
        }






    }
   















}