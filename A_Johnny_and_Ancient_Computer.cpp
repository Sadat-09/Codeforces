#include <bits/stdc++.h>
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef unsigned long int ll;
#define int long long
typedef long double LD;
#define all(x) x.begin(), x.end()
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
    ll a, b;
    cin >> a >> b;
    int count = 0;
    ll mx = max(a, b);
    ll mn = min(a, b);

    if (a == b)
        cout << 0 << endl;
    else if (mx % mn != 0)
        cout << -1 << endl;
    else
    {
        while (mx != mn)
        {
            if (mx % 8 == 0)
            {
                mx = mx / 8;
                count++;
            }
            else if (mx % 4 == 0)
            {
                mx = mx / 4;
                count++;
            }
            else if (mx % 2 == 0)
            {
                mx = mx / 2;
                count++;
            }
            else
            {
                cout << -1 << endl;
                return;
            }
        }
        cout << count << endl;
    }
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}