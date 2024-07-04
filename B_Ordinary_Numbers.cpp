
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
     

        long long n;
        std::cin >> n;

        long long count = 0;
        for (int digits = 1; digits <= 9; ++digits) {
            long long ordinary_number = 0;
            for (int i = 0; i < digits; ++i) {
                ordinary_number = ordinary_number * 10 + 1;
            }
            while (ordinary_number <= n) {
                ++count;
                ordinary_number = ordinary_number * 10 + 1;
            }
        }

        std::cout << count << std::endl;
    }



int main()
{
    IO;
   // solve();
     w(t);
    return 0;
}