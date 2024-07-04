
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
    ll count = 0;

    vector<int>arr;
    for (ll i = 0; i < n; i++)
    {
        /* code */
        int l;
        cin>>l;
        arr.push_back(l);
    }
    if (arr[0] != 25)
        cout << "NO";

    else
    {

        for (ll i = 1; i < n; i++)
        {
            /* code */
            if (arr[i] == 25)
            {
                arr[i]=arr[i]+arr[i-1];
                
            }
            else if (arr[i] > 25)
            {
                if ((arr[i] - 25) <= arr[i - 1])
                {
                    arr[i] = arr[i-1]+arr[i]-25;
                    
                }
                else
                {
                    cout << "NO";
                    return;
                }
            }
        }
        cout << "YES";
    }
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}