
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
    int h1,m1,h2,m2;
    char c;
    cin>>h1>>c>>m1;
  
    cin>>h2>>c>>m2;

    int min1=h1*60+m1;
    int min2=h2*60+m2;

    int mid=(min1+min2)/2;
    int hrs=mid/60;
    int mins=mid%60;
    if(hrs>9&&mins>9){
        cout<<hrs<<":"<<mins<<endl;
    
    }
    else{
        if(hrs<10){
            cout<<0;
        }
            cout<<hrs<<":";
        
        if(mins<10){ 
         cout<<0;
        }
          
            cout<<mins<<endl;
        
    }








    
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}