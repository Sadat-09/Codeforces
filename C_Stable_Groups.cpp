
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
   int n,k,x;
    cin>>n>>k>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    vector<int> diff;
    for(int i=1;i<n;i++)
    {
        if(v[i]-v[i-1]>x)
        {
            diff.push_back(v[i]-v[i-1]);
        }
    }
    sort(diff.begin(),diff.end());
    int ans=diff.size()+1;
    for(int i=0;i<diff.size();i++)
    {
        int req=diff[i]/x;
        if(diff[i]%x==0)
        {
            req--;
        }
        if(k>=req)
        {
            k-=req;
            ans--;
        }
    }
    cout<<ans<<endl;
    
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}