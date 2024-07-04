
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
    ll n;
    cin>>n;
    vector<int>v,vis(n+1,0);
    for (int i = 1; i <= n; i++)
    {
        if(!vis[i]){
            for (int j = 1; j <=n; j*=2)
            {
               vis[j]++;
               v.push_back(j);
            }
            
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    

}

    


int main()
{
    IO;
    //solve();
     w(t);
    return 0;
}