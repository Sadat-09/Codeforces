
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

    ll arr[n];

    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll x,y,z;

     x=arr[0]*arr[1]*arr[n-1]*arr[n-2]*arr[n-3];
     y=arr[0]*arr[1]*arr[2]*arr[3]*arr[n-1];
     z=arr[n-1]*arr[n-2]*arr[n-3]*arr[n-4]*arr[n-5];
    cout<<max({x,y,z})<<endl;
    
    
}

int main()
{
    IO;
    //solve();
     w(t);
    return 0;
}