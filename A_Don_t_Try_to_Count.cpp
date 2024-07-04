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
    int n, m;
     cin >> n >> m;
    string x, s;
     cin >> x >> s;
    for (int i = 0; i < 10; i++)
    {
        if(x.find(s) != string::npos) 
        {
             cout << i << endl;
              return;
        }
        x += x;
    }
    
    cout << -1 << endl;
}

int main()
{
    IO;
    // solve();
    w(t);
    return 0;
}