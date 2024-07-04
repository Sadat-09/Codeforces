
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

    if(a>b){
        cout<<"orz teralem is the king!";

    }
    if(a<b){
        cout<<"orz overflowker is the king!";

    }
    if(a==b){
        cout<<"even even seven EIeven.";

    }

    
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}