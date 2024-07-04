
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
    int arr1[n];
    int arr2[n+1];

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr1[i];
    }
    for (int i = 0; i < n+1; i++)
    {
        /* code */
        cin>>arr2[i];
    }
     int ans=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int b=abs(arr2[n]-arr1[i]);
        ans=min(ans,b);
    }
    int res=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        res+=abs(arr1[i]-arr2[i]);
    }
   
    

    cout<<res+ans+1<<endl;
    


    

    
}

int main()
{
    IO;
    //solve();
    w(t);
    return 0;
}