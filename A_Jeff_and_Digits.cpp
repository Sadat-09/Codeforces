
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
    int a;

    int count5=0,count0=0,ans=0;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a==5) count5++;
        if(a==0) count0++;

        if((count5*5)%9==0) ans=count5;

    }

        if(ans!=0&&count0>0){
            for (int i = 0; i < ans; i++)
            {
                cout<<5;
            }
             for (int i = 0; i < count0; i++)
            {
                cout<<0;
            }
            
        }
        else if(ans==0&&count0>0){
            cout<<0;

        }
        else{
            cout<<-1;
        }



    
   
    
    

    }

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}