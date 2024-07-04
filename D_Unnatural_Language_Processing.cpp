
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
{int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;

    std::string s2;
    for (int i = 0; i < n; i++) {
        if ((s[i] != 'a' && s[i] != 'e')and i!=0) {
            if (i + 1 < n && (s[i + 1] == 'a' || s[i + 1] == 'e')) {
                s2.push_back('.');
                s2.push_back(s[i]);
            } else {
                s2.push_back(s[i]);
            }
        } else {
            s2.push_back(s[i]);
        }
    }

    if (!s2.empty() && s2.back() == '.') {
        s2.pop_back();
    }

    std::cout << s2 << std::endl;
    
    
}

int main()
{
    IO;
    //solve();
    w(t);
    return 0;
}