
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
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

       
        int max_value1 = abs(a[0] - a[1]) + abs(a[1] - a[n - 2]) + abs(a[n - 2] - a[n - 1]) + abs(a[n - 1] - a[0]);
        int max_value2 = abs(a[1] - a[2]) + abs(a[2] - a[n - 1]) + abs(a[n - 1] - a[n - 2]) + abs(a[n - 2] - a[1]);

        int max_value = max(max_value1, max_value2);
        cout << max_value << endl;
    
    
}

int main()
{
    IO;
    //solve();
    w(t);
    return 0;
}