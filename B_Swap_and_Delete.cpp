
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
    int n = s.size();
    int cnt = 0;
    int cnt2 = 0;
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (s[i] == '0')
            cnt++;
        if (s[i] == '1')
            cnt2++;
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (s[i] == '1')
        {
            if (cnt > 0)
                cnt--;
            else
                break;
        }
        if (s[i] == '0')
        {
            if (cnt2 > 0)
                cnt2--;
            else
                break;
        }
    }
    cout<<cnt+cnt2<<endl;
}

int main()
{
    IO;
    // solve();
    w(t);
    return 0;
}