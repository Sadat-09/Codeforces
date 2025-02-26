
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
    vector<int> tasks = {2, 6, 3, 4, 1, 7, 2};
    int n = tasks.size();
    int worker1 = 0, worker2 = 0;

    for (int i = 0; i < n; ++i) {
        if (worker1 <= worker2) {
            worker1 += tasks[i];
        } else {
            worker2 += tasks[i];
        }
    }

    int least_time = max(worker1, worker2);
    cout << "Least time to complete tasks: " << least_time << endl;
  
    
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}