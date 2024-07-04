#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int count=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int Best=arr[0];
     int Worst=arr[0];
 for(int i=1;i<n;i++){
        if(arr[i]>Best){
            Best=arr[i];
            count++;
        }
         if(arr[i]<Worst){
            Worst=arr[i];
            count++;
        }

    }
 cout<<count;












}
