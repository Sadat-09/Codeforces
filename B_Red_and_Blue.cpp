
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
    int n, m;
    cin >> n;

    int arr[n];

    vector<int> v1;
    vector<int> v2;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> m;
    int arr2[m];

    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    v1.push_back(arr[0]);
    v2.push_back(arr2[0]);

    for (int i = 1; i < n; i++)
    {
        v1.push_back(arr[i] + v1[i - 1]);
    }

    for (int i = 1; i < m; i++)
    {
        v2.push_back(arr2[i] + v2[i - 1]);
    }

    int ans1 = *max_element(v1.begin(), v1.end());
    int ans2 = *max_element(v2.begin(), v2.end());

    if (ans1 < 0)
        ans1 = 0;
    if (ans2 < 0)
        ans2 = 0;

    cout << ans1 + ans2 << endl;
}

int main()
{
    IO;
    // solve();
    w(t);
    return 0;
}