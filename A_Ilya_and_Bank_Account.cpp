
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
    int n; cin>>n;

    if(n<0){
    
    int n1=n/10;
    int quotient = n/ 100;
    int remainder = n % 10;
    n = quotient * 10 + remainder;
    cout<<max(n1,n);
    }
    else{
        cout<<n;
    }
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}