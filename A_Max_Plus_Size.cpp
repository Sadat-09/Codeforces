
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
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans=0;
    int ans1=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(i%2==0){
            ans=max(ans,a[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(i%2!=0){
            ans1=max(ans1,a[i]);
        }
    }
    int final_ans=max(ans,ans1);
    
        cout<<final_ans+n/2<<endl;
   
    
   
    
    
}

int main()
{
    IO;
    //solve();
    w(t);
    return 0;
}