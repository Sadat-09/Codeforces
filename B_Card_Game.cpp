
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
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    int ans = 0;
    if ((a1 > b1 && a2 > b2) || (a1 >= b1 && a2 > b2) || (a1 > b1 && a2 >= b2))
        ans++;
    if ((a1 > b2 && a2 > b1) || (a1 >= b2 && a2 > b1) || (a1 > b2 && a2 >= b1))
        ans++;
    if ((a2 > b1 && a1 > b2) || (a2 >= b1 && a1 > b2) || (a2 > b1 && a1 >= b2))
        ans++;
    if ((a2 > b2 && a1 > b1) || (a2 >= b2 && a1 > b1) || (a2 > b2 && a1 >= b1))
        ans++;
    cout << ans << endl;
}

int main()
{
    IO;
    // solve();
    w(t);
    return 0;
}