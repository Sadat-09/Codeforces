#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;

int arr[n];
int curr=1;
int maxi=1;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n-1;i++){
    if(arr[i+1]>arr[i]){
        curr++;
    }
    else{
        curr=1;
    }



}
if(maxi<curr){
    cout<<curr;
}



}
