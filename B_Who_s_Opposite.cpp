
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
    int a,b,c;
    cin>>a>>b>>c;
    int n=abs(a-b);

    int d=2*abs(a-b);

    if(a>d||b>d||c>d){
        cout<<-1<<endl;
    }
    else{
        if(c<=d/2){
            cout<<c+n<<endl;
        }
        else if(c>=d/2){
            cout<<c-n<<endl;
        }
    }
    
}

int main()
{
    #i
    
    IO;
    //solve();
     w(t);
    return 0;
}