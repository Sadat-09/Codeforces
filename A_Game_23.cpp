
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
    int res=-1;

    if(n==m){ cout<<0; return;}

    if(m%n==0){
        res=0;
        int d=m/n;

        while (d%2==0)
        {
            d/=2;
            res++;
        }

          while (d%3==0)
        {
            d/=3;
            res++;
        }

        if(d!=1) res=-1;
        
        

    }

    cout<<res;

   
    
    
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}