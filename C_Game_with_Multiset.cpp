
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
    int tt;
    cin >> tt;

    vector<int> count(30, 0);
    for (int i = 0; i < tt; i++)
    {
        int t, v;
        cin >> t >> v;
        if (t == 1)
            count[v]++;
        else
        {
            int i = 29;
            while (i >= 0)
            {
                if (count[i])
                {
                    int k = v / pow(2, i);
                    int p = min(k, count[i]);
                    v -= p * pow(2, i);
                }
                i--;
            }

            if (v == 0)
                cout << "YES" << endl;
            else
            {
                cout << "NO" << endl;
            }
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