#include <bits/stdc++.h>
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef unsigned long int ll;
#define int long long
typedef long double LD;
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define w(t)     \
    int t;       \
    cin >> t;    \
    while (t--)  \
    {            \
        solve(); \
    }
using namespace std;

int const s = 2 * 1e5;
int dp[s];

void solve()
{
    int n;
    cin >> n;
    cout << dp[n] << endl;
}

int32_t main()
{
    IO;
    dp[1] = 1;
    for (int i = 2; i <= 2e5; i++)
    {
        int j = i, sum = 0;
        while (j > 0)
        {
            sum += j % 10;
            j /= 10;
        }
        dp[i] = dp[i - 1] + sum;
    }
    // solve();
    w(t);
    return 0;
}