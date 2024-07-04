
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
      vector<int> a(n),taken;
      string ans="";
      bool broken=false;
      for(int i=0;i<n;i++){
         cin>>a[i];
         if(taken.empty()){
            ans.push_back('1');
            taken.push_back(a[i]);
         }
         else{
            if(broken){
               if(a[i]<taken.back()){
                  ans.push_back('0');
               }
               else{
                  if(a[i]>taken[0]){
                     ans.push_back('0');
                  }
                  else{
                     ans.push_back('1');
                     taken.push_back(a[i]);
                  }
               }
            }
            else{
               // till now, the array is sorted
               if(a[i]>=taken.back()){
                  ans.push_back('1');
                  taken.push_back(a[i]);
               }
               else{
                  if(a[i]>taken[0]){
                     ans.push_back('0');
                  }
                  else{
                     broken=true;
                     ans.push_back('1');
                     taken.push_back(a[i]);
                  }
               }
            }
         }
      }
 
      cout<<ans<<endl;
   }
    
    


int main()
{
    IO;
    //solve();
     w(t);
    return 0;
}