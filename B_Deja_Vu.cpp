#include <bits/stdc++.h>
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef unsigned long int ll;
#define int long long
typedef long double LD;
#define all(x) x.begin(),x.end()
#define w(t)     \
    int t;       \
    cin >> t;    \
    while (t--)  \
    {            \
        solve(); \
    }
using namespace std;

unsigned long long powerOf2(int n) {
    return 1ULL << n;
}

bool isPowerOfTwo(int n)
{
    return (ceil(log2(n)) == floor(log2(n)));
}

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> x(q);
    for (int i = 0; i < q; i++) cin >> x[i];

    vector<int> powers(31);
    for (int i = 0; i < 31; i++) {
        powers[i] = 1LL << i;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < q; j++)
        {
            if(a[i] % powers[x[j]] == 0) a[i] += powers[x[j] - 1];
        }
    }
    for (auto i : a) cout << i << " ";
    cout << endl;
}


int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}