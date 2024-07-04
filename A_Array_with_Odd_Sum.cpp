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
       int sum=0,o=0,e=0;
       int arr[n];
       for(int j=0;j<n;j++){
           cin>>arr[j];
           if(arr[j]%2!=0 || arr[j]==1){
               o++;
           }else{
               e++;
           }
           sum+=arr[j];
       }
       
       if(sum%2!=0 || sum==1){
           cout<<"YES"<<"\n";
       }
       else{
           if(o!=0 && e!=0){
               cout<<"YES"<<"\n";
           }
           else{
               cout<<"NO"<<"\n";
           }
       }
   
}

int main()
{
    IO;
    //solve();
    w(t);
    return 0;
}