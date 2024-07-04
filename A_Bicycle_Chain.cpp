
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
    int a[n];
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
              cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(b[j]%a[i]==0) v.push_back(b[j]/a[i]);
        }
        

    }
    sort(v.begin(),v.end());
    int count=0;
   for (int i = v.size()-1; i>=1 ; i--)
   {
      if(v[i]==v[i-1]) count++;
      else break;
   }
   
    cout<<count+1;

// for (int i = 0; i < v.size(); i++)
// {
//     cout<<v[i]<<" ";
// }

    
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}