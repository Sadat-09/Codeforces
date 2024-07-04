
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
    
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int count = 0;
    if(a[x]==1) count++;
 
    int l = x-1;
    int r = x+1;
 
    while(l>=1 || r<=n)
    {
        if(l>=1 && r<=n)
        {
            if(a[l]==1 && a[r]==1) count+=2;
        }
        if(l<1 && a[r]==1) count++;
        if(r>n && a[l]==1) count++;
        l--;
        r++;
    }
    cout<<count<<endl;
    
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}