
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
    ll n;
    cin >> n;
    vector<ll> arr1(n + 1), arr2(n + 1), prefix1(n + 1, 0), prefix2(n + 1, 0);

    for (ll i = 1; i <= n; i++)
    {
        cin >> arr1[i];
        arr2[i] = arr1[i];
    }

    sort(arr2.begin() + 1, arr2.end());

    for (ll i = 1; i <= n; i++)
    {
        prefix1[i] = prefix1[i - 1] + arr1[i];
        prefix2[i] = prefix2[i - 1] + arr2[i];
    }

    ll m;
    cin >> m;

    while (m--)
    {
        ll d, l, r;
        cin >> d >> l >> r;

        if (d == 1)
        {

            cout << prefix1[r] - prefix1[l - 1] << endl;
        }
        else
        {

            cout << prefix2[r] - prefix2[l - 1] << endl;
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