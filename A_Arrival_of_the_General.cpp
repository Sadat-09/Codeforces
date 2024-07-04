
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
    int x;
    cin>>x;
    int min=x,max=x;
    int min_ind=0,max_ind=0;
    for(int i=1;i<n;i++){
        cin>>x;
        if(min>=x){
            min=x;
            min_ind=i;
        }
        if(max<x){
            max=x;
            max_ind=i;
        }
    }
    if(min_ind<max_ind){
       cout<<max_ind+n-min_ind-2<<endl;
    }else{
        cout<<max_ind+n-min_ind-1<<endl;
    }
    
}
    


int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}