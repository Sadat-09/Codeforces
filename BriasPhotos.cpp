#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int size=n*m;

    char arr[size];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
     for(int i=0;i<size;i++){
        if(arr[i]=='W'&&arr[i]=='B'&&arr[i]=='G'){
            cout<<"#Black&White";
        }
        else{
            cout<<"#Color";
        }
    }








}
