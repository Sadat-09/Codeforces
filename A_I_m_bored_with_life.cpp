#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
#include<algorithm>
 
using namespace std;
 
int main()
{
    long long int a;
    long  long int b;
    long long int d=1;
    long long int e =1;
    cin>>a>>b;
 
    for(int i=1;i<=a;i++)
    {
        d*=i;
       
    }
  
    for(int i=1;i<=b;i++)
    {
       e*=i;
    }
   long long int  c =gcd(d,e);
     cout<< c<<endl;
   
}