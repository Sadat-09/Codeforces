#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

int ans=n/100;
int left=n%100;

ans=ans+left/20;
left=left%20;

ans=ans+left/10;
left=left%10;

ans=ans+left/5;
left=left%5;
ans=ans+left/1;
left=left%1;

cout<<ans;


}
