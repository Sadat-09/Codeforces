
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
    int m;
    int ans1=100000000;
    int ans2=100000000;
    int ans3=100000000;
    int OO;
    int z;
    int O;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin>>m>>s;
        if(s=="11"){
            OO=m;
            ans1=min(ans1,OO);

        }
         if(s=="01"){
            z=m;
            ans2=min(ans2,z);

        }
         if(s=="10"){
            O=m;
            ans3=min(ans3,O );

        }



    }
    int ans4=ans2+ans3;

    int ans5=min(ans4,ans1);

    if(ans5>=100000000){
        cout<<-1<<endl;
    }
    else{
    cout<<ans5<<endl;
    }
    
}

int main()
{
    IO;
    //solve();
     w(t);
    return 0;
}