
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
    set<ll>s;
    ll arr[n];
    ll count1=0,count2=0;

    for (ll i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
        
    }
    
    sort(arr,arr+n);
    for (ll i = 0; i < n; i++)
    {
      /* code */
      if(arr[i]==arr[0]) count1++;
      if(arr[i]==arr[n-1]) count2++;
    }
    

    ll m=arr[n-1]-arr[0];

    if(arr[0]-arr[n-1]==0) cout<<m<<" "<<n*(n-1)/2;
    else cout<< m<<" "<<count1*count2;



    
    
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}