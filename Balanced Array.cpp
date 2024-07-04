#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
       int arr[n];
       for(int i=0;i<n;i++){
        cin>>arr[i];
       }
       long long int temp1=0;
       long long int temp2=0;
         for(int i=0;i<n/2;i++){
        temp1=temp1+arr[i];
       }
          for(int i=n/2;i<n;i++){
        temp2=temp2+arr[i];
       }
       if(temp1==temp2){
        cout<<"Yes"<<endl;;
          for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";

       }



       }
       else{
        cout<<"No"<<endl ;
       }










    }











}
