
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
   int n, f, k;
        cin >> n >> f >> k;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int l = v[f - 1];
        sort(v.begin(), v.end(), greater<int>());

        int count1 = 0, count2 = 0;
        for (int i = 0; i < k; i++) {
            if (v[i] == l) {
                count1++;
            }
        }
        for (int i = k; i < n; i++) {
            if (v[i] == l) {
                count2++;
            }
        }

        if (count1 > 0 && count2 == 0) {
            cout << "YES" << endl;
        } else if (count1 == 0 && count2 > 0) {
            cout << "NO" << endl;
        } else {
            cout << "MAYBE" << endl;
        }
    }

    


int main()
{
    IO;
    //solve();
    w(t);
    return 0;
}