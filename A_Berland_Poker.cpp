
#include <bits/stdc++.h>
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef long long int ll;
typedef long double LD;
#define sa(a, n) sort(a, a + n)
#define sv(v) sort(v.begin(), v.end())
#define w(t)     \
    int t;       \
    cin >> t;    \
    while (t--)  \
    {            \
        solve(); \
    }
using namespace std;
bool check_prime(int n)
{
    bool is_prime = true;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1)
    {
        is_prime = false;
    }

    for (int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            is_prime = false;
            break;
        }
    }

    return is_prime;
}

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    ll C = a / c;
    if (C >= b)
        cout << b << endl;
    else
    {
        ll rem = b - C;
        ll o = ceil(1.0 * rem / (c - 1));
        cout << C - o << endl;
    }
}

int main()
{
    IO;
    // solve();
    w(t);
    return 0;
}