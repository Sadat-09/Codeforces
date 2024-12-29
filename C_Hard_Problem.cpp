
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
    
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        
        
        int r1 = min(m, a);
        int r2 = min(m, b);
        
        
        int rr1 = m - r1;
        int rr2 = m - r2;
        
        
        int mini = min(c, rr1 + rr2);
        
      
        int total= r1 + r2 + mini;
        
        cout << total<< endl;
    
    
}

int main()
{
    IO;
    //solve();
    w(t);
    return 0;
}