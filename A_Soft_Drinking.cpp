#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,k,l,c,d,p,a,b;
    cin>>n>>k>>l>>c>>d>>p>>a>>b;
    int drink=(k*l)/a;
    int lemon=c*d;
    int saltforToasts=p/b;
 
    int ans=min({drink,lemon,saltforToasts});
 
    cout<<ans/n;
    return 0;
}