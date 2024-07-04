
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
    long long i;
    string f,s;
    while(cin>>f>>s)
    {
        
        for(i=0; i<f.size(); i++)
        {
            f[i]=towlower(f[i]);
            s[i]=towlower(s[i]);
        }

        if(f==s){
            cout<<"0"<<endl;
        }
        else{
        for(i=0; i<s.size(); i++)
        {
            if(f[i]<s[i]){
                cout<<"-1"<<endl;
                break;
            }
            if(f[i]>s[i]){
                cout<<"1"<<endl;
                break;
            }

    }
        }
}
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}