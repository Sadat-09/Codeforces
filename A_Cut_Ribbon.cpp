
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
    int n,a,b,c;
    cin>>n>>a>>b>>c;

  int dp[n+1];
  dp[0]=0;
  int x,y,z;
  
  for (int i = 1; i <=n; i++)
  {
    x=INT_MIN,y=INT_MIN,z=INT_MIN;
    if(i>=a)
    {
      x=dp[i-a];
    }
    if(i>=b)
    {
      y=dp[i-b];
    }
    if(i>=c)
    {
      z=dp[i-c];
    }
    dp[i]=1+max(z,max(x,y));
    /* code */
  }
  cout<<dp[n];
  
   
  
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}