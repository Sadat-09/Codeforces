#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int c=abs(a-b);
   if(a>b){
    cout<<b<<" ";
    if(c%2==0)cout<<c/2;
    else cout<< (c-1)/2;

   }

   if(a<b){
           cout<<a<<" ";
    if(c%2==0)cout<<c/2;
    else cout<< (c-1)/2;

   }













}
