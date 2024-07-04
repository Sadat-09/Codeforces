#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n; cin>>n;
    int m=0;
    int b=0;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
      for(int i = 0; i < n; i++)
    {
        if(arr[i]%2==0){
            m+=arr[i];
        }
        else{
            b+=arr[i];
        }
    }
    if(m>b){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    }





}