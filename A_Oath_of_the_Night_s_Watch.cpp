
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
    if(n==1){
         cout<<0;
         return;
    }
    int arr[n];
    int count1=0,count2=0;
    for (int i = 0; i < n; i++)

    {
       cin>>arr[i];
    }
    sort(arr,arr+n);
    int j=0;
    while(j < n - 1 && arr[j] == arr[j + 1]){
        count1++;
        j++;
    }
    int k=n-1;
    while(arr[k]==arr[k-1]){
        count2++;
        k--;
    }
     if(count1==0 && count2==0){
         cout<<n-2;
         return;
     }
     if(count1+1==n){
        cout<<0;
        return;
     }

   else  cout<<n-(count1+count2+2);
    

    
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}