
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
    long long a, b;
    cin >> a >> b;
    vector<long long> v(a + b);
    for (int i = 0; i < a + b; i++)
    {
        cin >> v[i];
    }
    long long sum = 0;
    sort(v.begin(), v.end() - 1);

    for (int i = 1; i <= a; i++)
    {
        sum += v[(a + b) - i];
    }
    cout << sum << endl;
}

int main()
{
    IO;
    // solve();
    w(t);
    return 0;
}