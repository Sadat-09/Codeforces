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
    int n, k, d, w;
     cin >> n >> k >> d >> w;
    vector<int> arr(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]] = arr[i] + w;
    }
    int val = mp[arr[0]] + d;
    int count = 0, ans = 1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > val or count >= k) 
        {
            ans++;
            count = 0;
            val = mp[arr[i]] + d;
        }
        count++;
    }
    cout << ans << endl;
}

int main()
{
    IO;
    // solve();
    w(t);
    return 0;
}