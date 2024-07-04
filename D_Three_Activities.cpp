
#include <bits/stdc++.h>
#define IO                          \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)
typedef long long int ll;
typedef long double LD;
#define w(t)  \
  int t;      \
  cin >> t;   \
  while (t--) \
  {           \
    solve();  \
  }
using namespace std;
bool check_prime(int n)
{
  bool is_prime = true;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1)
  {
    is_prime = false;
  }

  for (int i = 2; i <= n / 2; ++i)
  {
    if (n % i == 0)
    {
      is_prime = false;
      break;
    }
  }

  return is_prime;
}
bool compare(int a, int b)
{
  return a > b;
}

void solve()
{
  int n;
  cin >> n;
  vector<pair<int, int>> a(n), b(n), c(n);

  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    a[i] = make_pair(x, i);
  }

  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    b[i] = make_pair(x, i);
  }

  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    c[i] = make_pair(x, i);
  }

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  sort(c.begin(), c.end());

  int ans = 0;
  for (int i = n - 1; i >= n - 3; i--)
  {
    for (int j = n - 1; j >= n - 3; j--)
    {
      for (int k = n - 1; k >= n - 3; k--)
      {
        if (a[i].second != b[j].second && b[j].second != c[k].second && c[k].second != a[i].second)
        {
          ans = max(ans, a[i].first + b[j].first + c[k].first);
        }
      }
    }
  }

  cout << ans << endl;
}

int main()
{
  IO;
  // solve();
  w(t);
  return 0;
}