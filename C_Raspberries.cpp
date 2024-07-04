
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
    int n,k;
    cin>>n>>k;
    
    int ans=k;
    int count=0;

    for (int i = 0; i < n; i++){
        int x;
        cin>>x;
        if(x%2==0) count++;
        if(x%k==0) ans=0;

        ans=min(ans,k-x%k); 

    }
    if(k==4){
        if(count>=2) ans=0;
        if(count==1) ans=min(ans,1);
        if(count==0) ans=min(ans,2);
    }
    cout<<ans<<endl;

    
}

int main()
{
    IO;
    //solve();
    w(t);
    return 0;
}