
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
    int count=0
    
    ;
    int ans=0;
    vector<int>v;

    for (int i = 0; i < 1000; i++)
    {
        if(check_prime(i)){
            for(auto j:v){
                v[j]=i;
                count++;
               int sum_of_elements = 0;
    for (int num : v) {
        sum_of_elements += num;
    }

    if(sum_of_elements==n){
        break;
    }
            }


        }
    }

    cout<<count<<endl;

    for(auto k:v){
        cout<<v[k]<<" ";
    }
    
    
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}