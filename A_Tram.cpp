
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

    int ans=0;
     int c;
    

    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin>>a>>b;
       
       if(i==0){
        c=b-a;

       }
       else{
        c=(c-a)+b;
       }
       ans=max(c,ans);
    }
    cout<<ans;
    
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}