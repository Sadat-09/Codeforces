
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
    string p;
    cin >> n >> p;

    bool flag = true;
    string d = "";
    string l = "";
    bool sl = false;

   
    for (char ch : p)
    {
        if (isdigit(ch))
        {
            d += ch;
            if (sl)
            {
                flag = false;
                break;
            }
        }
        else if (isalpha(ch))
        {
           l += ch;
            sl = true;
        }
    }

    
    for (size_t i = 1; i < d.size() && flag; ++i)
    {
        if (d[i] < d[i - 1])
        {
            flag = false;
        }
    }

    
    for (size_t i = 1; i <l.size() && flag; ++i)
    {
        if (l[i] <l[i - 1])
        {
            flag = false;
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    IO;
    //solve();
    w(t);
    return 0;
}