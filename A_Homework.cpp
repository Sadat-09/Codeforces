
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
    int a, b;
    string s1, s2,s3;
    cin >> a >> s1;
    cin >> b >> s2;
  

    cin >> s3;

    

    for (int i = 0; i < b; i++)
    {
        if (s3[i] == 'V')
        {
            s1=string(1,s2[i])+s1;
        }
        else
        {
            s1.push_back(s2[i]);
        }

    }

    cout << s1 << endl;
}

int main()
{
    IO;
    // solve();
    w(t);
    return 0;
}