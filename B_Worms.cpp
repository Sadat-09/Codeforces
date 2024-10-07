
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
bool check_prime(int n) {
  bool is_prime = true;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  return is_prime;
}


void solve()
{
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        /* code */
    }
    vector<ll> prefix(n);
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i-1] + arr[i];
        /* code */
    }
    int m;
    cin>>m;
    for (int i = 0; i < m; i++)
    {
        ll x;
        cin>>x;
        auto it = lower_bound(prefix.begin(), prefix.end(), x);
        cout << (it - prefix.begin() + 1) << endl;
        
        /* code */
    }
    
    
    
    
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}