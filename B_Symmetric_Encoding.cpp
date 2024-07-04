
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
    int n;
    cin >> n;
    string b;
    cin >> b;

    string r = b;
    sort(r.begin(), r.end());
    r.erase(unique(r.begin(), r.end()), r.end());

    unordered_map<char, char> mp;
    int l = r.size();
    for (int i = 0; i < l; ++i)
    {
        mp[r[i]] = r[l - 1 - i];
    }

    string s = b;
    for (int i = 0; i < n; ++i)
    {
        s[i] = mp[b[i]];
    }

    cout << s << endl;
}

int main()
{
    IO;
    // solve();
    w(t);
    return 0;
}