
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
    int n;
    cin >> n;
    vector<ll> a(n);
    ll total_wealth = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        total_wealth += a[i];
    }

    sort(a.begin(), a.end());
    ll max_wealth = a[n - 1];
    double average_wealth = (double)total_wealth / n;
    double half_average_wealth = average_wealth / 2.0;

    int unhappy_count = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] < half_average_wealth) {
            unhappy_count++;
        }
    }

    if (unhappy_count <= n / 2) {
        cout << -1 << endl;
        return;
    }

    ll left = 0, right = 1e12, answer = -1;
    while (left <= right) {
        ll mid = left + (right - left) / 2;
        double new_average_wealth = (double)(total_wealth + mid) / n;
        double new_half_average_wealth = new_average_wealth / 2.0;

        int new_unhappy_count = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] < new_half_average_wealth) {
                new_unhappy_count++;
            }
        }

        if (new_unhappy_count > n / 2) {
            answer = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << answer << endl;
    
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}