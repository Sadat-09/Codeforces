
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
    int n, k;
    cin >> n >> k;
    unordered_map<int, vector<int>> arr;

    for (int i = 0; i < k; ++i)
    {
        int b, c;
        cin >> b >> c;
        arr[b].push_back(c);
    }

    priority_queue<int> pq;
    for (auto &e : arr)
    {
        sort(e.second.rbegin(), e.second.rend());
        for (int i = 0; i < e.second.size(); ++i)
        {
            pq.push(e.second[i]);
        }
    }

    ll ans = 0;
    for (int i = 0; i < n && !pq.empty(); ++i)
    {
        ans += pq.top();
        pq.pop();
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