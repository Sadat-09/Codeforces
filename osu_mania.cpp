<<<<<<< HEAD

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
     int n;
        cin >> n;
        
        vector<string> rows(n);
        
        
        for (int i = 0; i < n; i++) {
            cin >> rows[i];
        }
        
        
        for (int i = n - 1; i >= 0; i--) {
            for (int j = 0; j < rows[i].size(); j++) {
                if (rows[i][j] == '#') {
                    cout << (j + 1) << " "; 
                    break;
                }
            }
        }
        cout << endl;
    
}

int main()
{
    IO;
    //solve();
    w(t);
    return 0;
=======

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
     int n;
        cin >> n;
        
        vector<string> rows(n);
        
        
        for (int i = 0; i < n; i++) {
            cin >> rows[i];
        }
        
        
        for (int i = n - 1; i >= 0; i--) {
            for (int j = 0; j < rows[i].size(); j++) {
                if (rows[i][j] == '#') {
                    cout << (j + 1) << " "; 
                    break;
                }
            }
        }
        cout << endl;
    
}

int main()
{
    IO;
    //solve();
    w(t);
    return 0;
>>>>>>> d5fa9769349ca5308e88487340ddda628b4cd403
}