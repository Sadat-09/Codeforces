#include<bits/stdc++.h>
using namespace std;


int main(){
    int a,b,c;
    cin>>a>>b>>c;

    int s1=2*a+2*b;
    int s2=a+b+c;
    int s3=2*a+2*c;
    int s4=2*b+2*c;

    int d=min(s1,s2);
    int e=min(s3,s4);

    int f=min(d,e);
    cout<<f;











}

