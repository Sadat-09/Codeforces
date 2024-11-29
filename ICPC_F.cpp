
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
    int x, y, z; cin >> x >> y >> z;
    int s = x + y + z;
    int gcd = __gcd((s - x) * (s - y) * (s - z), s);
    cout <<((s - x) * (s - y) * (s - z)) / gcd << "/" << s / gcd << endl;
}

int main()
{
    IO;
    //solve();
    w(t);
    return 0;
}