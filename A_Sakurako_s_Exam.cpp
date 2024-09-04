
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
     int a,b;
    cin>>a>>b;
    b=b%2;
    if(b==0 && a%2==0){
        cout<<"YES"<<endl;
    }
    else if(b==1 && a%2==0 && a!=0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
}

int main()
{
    IO;
    solve();
    //w(t);
    return 0;
}