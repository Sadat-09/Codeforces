
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
    char arr[11][11];
    
    for (int i = 1; i <=10; ++i)
    {
        for (int j = 1; j <= 10; ++j)
        {
            cin>>arr[i][j];
        }
    }
 
    ll total=0;
    for (int i = 1; i <=10; ++i)
    {
        for (int j = 1; j <= 10; ++j)
        {
            if (arr[i][j]=='X')
            {
                ll a = min(i,j);
                ll b =  min(11-i,11-j);
                total+=min(a,b);
            }
 
        }
        
    }
    cout<<total<<endl;
    
}

int main()
{
    IO;
    //solve();
     w(t);
    return 0;
}