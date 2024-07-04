
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
    
    string initial_balance_str;
    cin >> initial_balance_str;
    
    
    int initial_balance_cents = stoi(initial_balance_str.substr(1, initial_balance_str.size() - 3)) * 100
                                + stoi(initial_balance_str.substr(initial_balance_str.size() - 2));
    
    int late_count = 0;
    
    for (int i = 0; i < n; ++i) {
        
        string deposit_str;
        cin >> deposit_str;
        
       
        int deposit_cents = stoi(deposit_str.substr(1, deposit_str.size() - 3)) * 100
                            + stoi(deposit_str.substr(deposit_str.size() - 2));
  
        int total_balance_cents = initial_balance_cents + deposit_cents;
        
    
        if (total_balance_cents % 100 != 0) {
            late_count++;
        }
        
        initial_balance_cents = total_balance_cents;
    }
    
    cout << late_count << endl;
    
    
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}