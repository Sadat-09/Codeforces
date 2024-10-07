
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
    int n,k;
        cin>>n>>k;
        if(n<k)cout<<"NO"<<endl;
        else if(k==1)
        {
            cout<<"YES"<<endl;
            cout<<n<<endl;
        }
        else if(n%2==0)
        {
            if(k%2==0)
            {
                cout<<"YES"<<endl;
                for(int i=1;i<k;i++)cout<<1<<" ";
                cout<<n-(k-1)<<endl;
            }
            else if(k*2<=n)
            {
                cout<<"YES"<<endl;
                for(int i=1;i<k;i++)cout<<2<<" ";
                cout<<n-(k-1)*2<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else
        {
            if(k%2==1)
            {
                cout<<"YES"<<endl;
                for(int i=1;i<k;i++)cout<<1<<" ";
                cout<<n-(k-1)<<endl;
            }
            else cout<<"NO"<<endl;
        }
    
}

int main()
{
    IO;
    //solve();
    w(t);
    return 0;
}