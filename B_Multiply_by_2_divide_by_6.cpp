

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
    cin >> n;
    ll count = 0;

    while (n != 1)
    {
        if (n % 6 == 0)
        {
            n = n / 6;
            count++;
        }
        else if (n % 3 == 0)
        {
            n = n * 2;
            count++;
        }
        else
        {

            cout << "-1" << endl;
            return;
        }
    }

    cout << count << endl;
}

int main()
{
    IO;
    //solve();
     w(t);
    return 0;
}