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

    stack<int> u;
    stack<int> l;

    for (long long i = 0; i < s.size(); i++)
    {
        if (s[i]>='A' and s[i]<='Z' and s[i] != 'B')
            u.push(i);
        if ( s[i]>='a' and s[i]<='z' and s[i] != 'b')
            l.push(i);
        if (s[i] == 'B' and !u.empty())
        {
            s[u.top()] = '8';
            u.pop();
        }

        if (s[i] == 'b' and !l.empty())
        {
            s[l.top()] = '8';
            l.pop();
        }
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != 'B' and s[i] != 'b' and s[i] != '8')
        {
            cout << s[i];
        }
    }
    cout << endl;
}
int main()
{
    IO;
    // solve();
    w(t);
    return 0;
}