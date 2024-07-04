#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];

        }


        for(int i=0;i<n;i++){
          if(i==0){
           if(arr[i]!=arr[i+1] and arr[i]!=arr[i+2]){
                cout<<i+1;

           }
          }
          else if(i==n-1){
            if(arr[i]!=arr[i-1]and arr[i]!=arr[i-2]){
                cout<<i+1;

            }
          }
          else{
          if(arr[i]!=arr[i+1]and arr[i]!=arr[i-1]){
            cout<<i+1;

          }
          }

          }
        }

    }



