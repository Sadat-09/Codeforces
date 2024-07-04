
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
    int n; cin >> n;
    string s; cin >> s;
    unordered_map<char, int> m;
    for (int i = 0; i < s.size(); i++) m[s[i]]++;
    int cnt = 0;
    for (int i = 'a'; i <= 'z'; i++)
        cnt = max(cnt, m[i]);
    if (cnt > n / 2) 
        cout << 2 * cnt - n << endl;
    else if (n % 2) cout << 1 << endl; 
    else 
        cout << 0 << endl;
}

int main()
{
    IO;
    //solve();
     w(t);
    return 0;
}