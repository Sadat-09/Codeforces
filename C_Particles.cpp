
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
{  long long n;
    std::cin >> n;

    long long arr[n + 1];
    for (long long i = 1; i <= n; i++) {
        std::cin >> arr[i];
    }

    int count = 0;
    for (long long i = 1; i <= n; i++) {
        if (arr[i]<0)
            count++;
    }

    if (count == n) {
        long long l = *max_element(arr + 1, arr + n + 1);
        cout << l << endl;
        return;
    }

    if (n == 1) {
        cout << arr[1] << endl;
        return;
    }

    long long sum1 = 0, sum2 = 0;

    for (long long i = 1; i <= n; i++) {
        if (i % 2 == 0 && arr[i] > 0)
            sum1 += arr[i];
        if (i % 2 != 0 && arr[i] > 0)
            sum2 += arr[i];
    }

    long long ans = max(sum1, sum2);
    cout << ans << endl;
    
}

int main()
{
    IO;
    //solve();
    w(t);
    return 0;
}