
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
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int ans = a * n;

    if (b <= 0)
    {
        int c1 = 0;
        int z = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                while (s[i] == '0' and i < n)
                {
                    i++;
                    z++;
                }
                c1++;
            }
        }

        if (z != n)
            c1++;

        int c2 = 0;
         z = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                while (s[i] == '1' and i < n)
                {
                    i++;
                    z++;
                }
                c2++;
            }
        }
        if (z != n)
            c2++;

    int cnt=min(c1,c2);
    ans+=b*cnt;
    }
    else{
        ans+=b*n;
    }
    cout<<ans<<endl;
}

int main()
{
    IO;
    //solve();
    w(t);
    return 0;
}