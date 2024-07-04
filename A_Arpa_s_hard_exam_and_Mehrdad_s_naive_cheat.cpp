
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
ll power(ll base, ll exponent, ll mod) {
    ll result = 1;
    base %= mod;

    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % mod;
        }
        exponent /= 2;
        base = (base * base) % mod;
    }

    return result;
}


void solve()
{
    int n;
    cin >> n;

    int ans = 1378;
    ll mod = 10; 

    ll s = power(ans, n, mod);

    cout << s << endl;
    
    
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}