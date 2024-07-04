
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
    vector<int> v;

    v.push_back(10);
    v.push_back(11);
    int i = 0;
    while (true)
    {
        /* code */
        if (i >= v.size())
            break;
        int x = v[i] * 10;
        int y = x + 1;
        if (x <= n)
        {
            v.push_back(x);
        }
        if (y <= n)
        {
            v.push_back(y);
        }
        i++;
    }
    reverse(v.begin(), v.end());

    while (n > 1)
    {
        /* code */
        bool ok = false;
        for (int i = 0; i < v.size(); i++)
        {
            /* code */
            if (n % v[i] == 0)
            {
                n /= v[i];
                ok = true;
            }
        }
        if(ok==false){
            break;
        }
        
    }
    if(n==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    IO;
    //solve();
    w(t);
    return 0;
}