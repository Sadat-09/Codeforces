#include<bits/stdc++.h>
using namespace std;

int main{


int arr[4];
for(int i=0;i<4;i++){
    cin>>arr[i];
}
for(int i=0;i<4;i++){
    int d=max({arr[i],arr[i+1]},comp);
}
cout<<d;





}
