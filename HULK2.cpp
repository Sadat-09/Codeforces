
#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;
if(n==1){
           cout<<"I hate it";
           return 0;


    }

for(int i=1;i<=n;i++){

   if( i!=n&&i%2!=0){
        cout<<"I hate that";
        cout<<" ";
    }
    else if(i==n&&i%2!=0){
        cout<<"I hate it";
    }
     else if(i==n&&i%2==0){
        cout<<"I love it";
    }
    else if(i%2==0){
        cout<<"I love that";
         cout<<" ";
    }







}















}
