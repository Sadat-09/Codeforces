
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
    int n,m;
    cin>>n>>m;
    

    int ans=min(n,m);

    if(ans%2==0){
        cout<<"Malvika";

    }
    else{
        cout<<"Akshat";
    }
    
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}