
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
    int a[n],b[n];
    set<int> s1;
    set<int> s2;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s1.insert(a[i]);
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        s2.insert(b[i]);
    }
    int k=s1.size();
    int l=s2.size();    
    if(k==1 and l==1) cout<<"NO"<<endl;
    else if((l==1 && k==2) || (k==1 && l==2)) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
   
    
}

int main()
{
    IO;
    //solve();
    w(t);
    return 0;
}