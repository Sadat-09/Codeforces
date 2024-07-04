
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
    int n, k; 
    cin >> n >> k;
    string s; 
    cin >> s;
    int countB = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == 'B') {
        countB++;
        }
    }
    if(countB == k){
     cout << 0 << endl;
    }
    else if(countB > k) {
        int count = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if(count == k) {
                cout << 1 << endl;
                cout << i + 1 << " A" << endl;
                break;
            }
            if(s[i] == 'B') count++;
           
        }
    } else {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i] == 'A'){ 
                count++;
            }
            if(count == (k - countB)) {
                cout << 1 << endl; 
                cout << i + 1 << " B" << endl;
                break;
            }
        }
    }
}
int main()
{
    IO;
    //solve();
     w(t);
    return 0;
}