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

    char arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    set<char> c1, c2, c3;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                c1.insert(arr[i][j]);
            else if (i + j == n - 1)
                c2.insert(arr[i][j]);
            else
                c3.insert(arr[i][j]);
        }
    }
    if (c1.size() == 1 && c2.size() == 1 && *c1.begin() == *c2.begin() && c3.size() == 1 && *c3.begin() != *c1.begin())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}
