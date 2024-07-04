
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
    int x=1,y=2;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int  min=abs(arr[0]-arr[1]);

    for (int i = 0; i < n-1; i++)
    {
        int dif=abs(arr[i]-arr[i+1]);
        if(dif<min){
            min =dif;
            x=i+1;
            y=i+2;
        }
    }
    int dif=abs(arr[0]-arr[n-1]);

    if(dif<min){
        x=1;
        y=n;
    }

    cout<<x<<" "<<y;
    
   
    
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}