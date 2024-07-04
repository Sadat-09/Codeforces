
#include <bits/stdc++.h>
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef long long int ll;
typedef long double LD;
#define w(t)     \
    int t;       \
    cin >> t;    \
    while (t--)  \
    {            \
        solve(); \
    }
using namespace std;

void solve()
{
    ll a,b,c,n,total;
    cin>>a>>b>>c>>n;

    total=a+b+c+n;

    if(total%3!=0){
        cout<<"NO"<<endl;
    }
    else if(total/3<a ||total/3<b||total/3<c){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
         
}
       

int main()
{
    IO;
     
    //solve();
     w(t);
    return 0;
}