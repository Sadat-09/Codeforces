
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

void solve()
{

  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  if (x1 == x2)
  {
    int side = abs(y2 - y1);
    cout << x1 + side << " " << y1 << " " << x2 + side << " " << y2 << endl;
  }

  else if (y1 == y2)
  {
    int side = abs(x2 - x1);
    cout << x1 << " " << y1 + side << " " << x2 << " " << y2 + side << endl;
  }

  else if (abs(x2 - x1) == abs(y2 - y1))
  {
    cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
  }

  else
  {
    cout << -1 << endl;
  }
}

int main()
{
  IO;
  solve();
  // w(t);
  return 0;
}