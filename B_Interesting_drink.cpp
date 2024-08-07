
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
    int arr[n];
    int count = 0;
    int l = 0;
    int r = n - 1;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int q;
    cin >> q;

    for (int i = 0; i <q; i++)
    {
        int m;
        cin >> m;

        l = 0;
        r = n - 1;
        while (l <= r)
        {

            int mid = l + (r - l) / 2;

            if (m >= arr[mid])
            {
                
                 count = mid + 1;
                l = mid + 1;
            }
            else
            {
               r = mid - 1;
            }
        }
        cout << count << endl;
        count = 0;
    }
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}