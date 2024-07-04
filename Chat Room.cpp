#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=4,a=0,b=0,c=0;

    int count=0;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 sort(arr,arr+n);
for(int j=0;j<n;j++){
        if(arr[j]==arr[j+1]){
            count++;
        }
    }
    cout<< count;



}
