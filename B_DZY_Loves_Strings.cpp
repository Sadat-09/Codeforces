
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
    string s;
    cin >> s;
    ll n;
    cin >> n;
    vector<long long> v(26);
    ll maxo = 0, count = 0;
    for (ll i = 0; i < 26; i++)
    {
        cin >> v[i];
        maxo = max(maxo, v[i]);
    }
    for (ll i = 0; i < s.length(); i++)
    {
        ll temp = ll(s[i] - 'a');
        count += ((i + 1) * v[temp]);
    }
    for (ll i = s.length() + 1; i <= n + s.length(); i++)
        count += (maxo * i);
    cout << count << endl;
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}