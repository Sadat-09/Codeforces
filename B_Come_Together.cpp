
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
    int ax,ay,bx,by,cx,cy;
       cin>>ax>>ay>>bx>>by>>cx>>cy;
    int ans=1;

    if((bx>ax&&cx>ax)||(bx<ax&&cx<ax)){
        ans+=min(abs(ax-bx),abs(ax-cx));
         
    }
      if((by>ay&&cy>ay)||(by<ay&&cy<ay)){
        ans+=min(abs(ay-by),abs(ay-cy));
         
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