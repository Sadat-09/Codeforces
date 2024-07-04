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
    int n; cin >> n;
    int a[n];
    vector<int> b, c;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    b.push_back(a[0]);
    for (int i = 1; i < n; i++)
    {
        if(b[0] % a[i] != 0) c.push_back(a[i]);
        else b.push_back(a[i]);
    }
    if(b.size() == 0 or c.size() == 0) {cout << -1 << endl; return;}
    cout << b.size() << " " << c.size() << endl;
    for(auto i:b) cout << i << " ";
    cout << endl;
    for(auto i:c) cout << i << " ";
    cout << endl;
}

int main()
{
    IO;
    // solve();
    w(t);
    return 0;
}