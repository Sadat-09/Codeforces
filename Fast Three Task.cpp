
#include <bits/stdc++.h>
#include <numeric> 
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
    vector<int> v(n);
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
         cin >> v[i];
         sum += v[i];
    }
 
    sort(v.begin(),v.end());
 
    if(sum%3 == 0)
    {
        cout << 0 << endl;
    }else 
    {
        int flag = 2;
 
        if((sum+1)%3 == 0)flag = 1;
        
        for(int i = 0; i < n; i++)
        {
            if((sum-v[i])%3 == 0) flag = 1;
        }
 
        cout <<flag << endl;
    
    }
    }


int main()
{
    IO;
    //solve();
     w(t);
    return 0;
}