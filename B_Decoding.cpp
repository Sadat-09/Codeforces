
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
    string s;
    cin>>s;
    
    vector<char>arr;
    int i=0;
      while(s.size()!=0){
if(n%2!=0){
  
        s.erase(n/2,1);
        arr[i]=s[n/2];
        i++;


    
}
else{
    
        s.erase((n/2)-1,1);
        arr[i]=s[(n/2)-1];
        i++;


    

}
      }

    for (int j = 0; j < arr.size(); j++)
    {
        cout<<arr[j];
    }
    

    
}

int main()
{
    IO;
    solve();
    //w(t);
    return 0;
}