
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


void solve() {
    int n;
    cin >> n;

    vector<int> denominations = {1000, 500, 100, 50, 10, 1};

    for (int denom : denominations) {
        if (n / denom > 0) {
            cout << denom << " " << n / denom << endl;
            n %= denom;
        }
    }
}


int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}