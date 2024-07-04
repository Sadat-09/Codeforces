
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

    vector<int>even,odd;

    for (int i = 1; i <=n; i++)
    {
        int x;
       cin>>x;

       if(x%2==0){
        even.push_back(i);
       }
       else{
        odd.push_back(i);
       }
    }

    if(odd.size()>=3){
        cout<<"YES"<<endl;
        cout<<odd[0]<<" "<<odd[1]<<" "<<odd[2]<<endl;
    }
    else if(odd.size()>=1&&even.size()>=2){
        cout<<"YES"<<endl;
        cout<<odd[0]<<" "<<even[0]<<" "<<even[1]<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    

    
    
}

int main()
{
    IO;
    //solve();
     w(t);
    return 0;
}                                                   