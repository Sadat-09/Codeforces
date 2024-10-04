
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

void solve()
{
    int n, b, d;
    cin >> n >> b >> d;

    int count = 0;
    int sum = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= b)
        {
            sum += arr[i];
        }

        if (sum > d)
        {
            count++;
            sum = 0;
        }
    }
    cout << count;
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}