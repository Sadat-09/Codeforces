
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
   
    int arr[n];
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
       arr2[i]=arr[i];
    }

    sort(arr2,arr2+n);
    int count=0;
    for (int i = 0; i < n-1; i++)
    {
        if(arr2[i]!=arr2[i+1]) break;
        else count++;
    }
    if(count!=0) cout<<"Still Rozdil";
   if(count==0){
    for (int i = 0; i < n; i++)
    {
        if(arr2[0]==arr[i]){
            cout<<i+1;
        }
    }
    
   }
    
    
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}