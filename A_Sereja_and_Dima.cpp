
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
bool descendingOrder(int a, int b) {
    return a > b;
}

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    int sum2=0;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        
    }
    int r=n-1;
    int l=0;

    for (int i = 0; i < n; i++)
    {
        if(i%2==0){
            if(arr[l]>arr[r]){
                sum+=arr[l];
                l++;
            }
            else{
                sum+=arr[r];
                r--;
            }
        }
        else{
            if(arr[l]>arr[r]){
                sum2+=arr[l];
                l++;
            }
            else{
                sum2+=arr[r];
                r--;
            }

        }
    }
    cout<<sum<<" "<<sum2;
    
   
    
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}