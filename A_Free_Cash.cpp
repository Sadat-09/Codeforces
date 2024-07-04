
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
    cin>>n;
    int count=0,ans=0;

    float arr[n];
    for (int i = 0; i < n; i++)
    {
       float a,b;
       cin>>a>>b;
       float t=a+(b/60);
       arr[i]=t;
    }
    for (int i = 0; i < n; i++)
    {
       if(arr[i]==arr[i+1]) {
        count++;
        ans=max(ans,count);
        }
        else{
            count=0;
        }
    }
    
    cout<<ans+1;
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}