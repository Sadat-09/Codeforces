
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
    int x, y, k;
    cin >> x >> y >> k;

    int Ax = 0, Ay = 0;
    int Bx = k, By = 0;

    int Cx = 0, Cy = 0;
    int Dx = 0, Dy = k;

    if (Bx > x)
    {
        Bx = 0;
        By = k;
    }
    if (Dy > y)
    {
        Dx = k;
        Dy = 0;
    }

    cout << Ax << " " << Ay << " " << Bx << " " << By << endl;
    cout << Cx << " " << Cy << " " << Dx << " " << Dy << endl;
}

int main()
{
    IO;
    // solve();
    w(t);
    return 0;
}