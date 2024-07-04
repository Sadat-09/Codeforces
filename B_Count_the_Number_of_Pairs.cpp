
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

    string s;
    cin>>s;
    ll ans=0;

        map<char,int> mp;
    for(auto c:s)  mp[c]++;
 
    for(char c='a';c<='z';c++){
        int mn=min(mp[c],mp[(c-32)]);
        ans+=mn;
        mp[c]-=mn;
        mp[c-32]-=mn;
    }
 
    for(char c='a';c<='z';c++){
        int add=max(mp[c],mp[c-32]);
        int mn=min(k,add/2);
        ans+=mn;
        k-=mn;
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