
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
    string s;
    cin>>s;
    if(s[0]=='1'){
        cout<<13<<endl;

    }    
    if(s[0]=='2'){
        cout<<23<<endl;

    }  
    if(s[0]=='3'){
        cout<<37<<endl;

    }  
    if(s[0]=='4'){
        cout<<41<<endl;

    }  
    if(s[0]=='5'){
        cout<<53<<endl;

    }  
    if(s[0]=='6'){
        cout<<61<<endl;

    }  
    if(s[0]=='7'){
        cout<<71<<endl;

    }  
    if(s[0]=='8'){
        cout<<83<<endl;

    }  
    if(s[0]=='9'){
        cout<<97<<endl;

    }  
}

int main()
{
    IO;
    //solve();
     w(t);
    return 0;
}