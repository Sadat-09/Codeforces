
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



void solve() {
    int X, Y, Z;
    cin >> X >> Y >> Z;

  
    if (Y - X == Z - Y) {
        cout << 0 << endl;
        return;
    }

   
    int min_operations = INT_MAX;

    
    int new_X = 2 * Y - Z;
    if (new_X >= 1 && new_X <= 100) {
        min_operations = min(min_operations, 1);
    }

  
    int new_Y1 = (X + Z) / 2;
    if ((X + Z) % 2 == 0 && new_Y1 >= 1 && new_Y1 <= 100) {
        min_operations = min(min_operations, 1);
    }

    
    int new_Z = 2 * Y - X;
    if (new_Z >= 1 && new_Z <= 100) {
        min_operations = min(min_operations, 1);
    }

    
    if (min_operations == INT_MAX) {
        min_operations = 2;
    }

    cout << min_operations << endl;
}
    


int main()
{
    IO;
    //solve();
    w(t);
    return 0;
}