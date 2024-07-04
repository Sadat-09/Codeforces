
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
    int a, b, k;
    cin >> a >> b >> k;

    int arr1[a];
    int arr2[b];

    for (int i = 0; i < a; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < b; i++)
    {
        cin >> arr2[i];
    }

    // sort(arr1, arr1 + a);
    // sort(arr2, arr2 + b);

    int count = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (arr1[i] + arr2[j] <= k)
                count++;
        }
    }

    cout << count << endl;
}

int main()
{
    IO;
   // solve();
    w(t);
    return 0;
}