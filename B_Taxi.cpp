
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
  int n;
  cin >> n;

  int arr[n];
  int sum = 0, one = 0, two = 0, three = 0, four = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (arr[i] == 1)
      one++;
    if (arr[i] == 2)
      two++;
    if (arr[i] == 3)
      three++;
    if (arr[i] == 4)
      four++;
  }
  sum += four;
  if (three >= one)
  {
    sum += one;
    three = three - one;
    one=0;
  }
  if (one > three)
  {
    sum += three;
    one = one - three;
    three=0;
  }
  if (three > 0)
  {
    sum += three;
    three = 0;
  }
  if (two > 0)
  {
    sum += two / 2;
    two = two % 2;
  }
  int l = one + (two * 2);

  if (l <= 4 and l > 0)
    sum += 1;
  else if (l % 4 != 0)
    sum += (l / 4) + 1;
  else
    sum += l / 4;

  cout << sum;
}

int main()
{
  IO;
  solve();
  // w(t);
  return 0;
}