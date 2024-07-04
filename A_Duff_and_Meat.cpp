
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
    int n,a,b;
    cin>>n;
    int mini=101;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        if(b<mini){
            sum+=a*b;
           mini=b;
        }
        else{
           mini=min(mini,b);
           sum+=mini*a;

        }
       


        
        
    }
     cout<<sum;
    
    
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}