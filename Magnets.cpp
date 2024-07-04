#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count =0;
    int arr[100001];



    for(int i=0;i<n;i++){
            cin>>arr[i];

    }
     for (int i=0;i<n;i++){
        if(arr[i]!=arr[i+1]){
            count++;
        }
     }

 cout<<count;





}
