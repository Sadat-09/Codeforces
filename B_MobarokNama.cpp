
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
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        bool ans = ((a * a) + (b * b) == (c * c)) ||
                   ((a * a) + (c * c) == (b * b)) ||
                   ((b * b) + (c * c) == (a * a));

        cout << "Case " << i << ": ";
        if (ans)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}