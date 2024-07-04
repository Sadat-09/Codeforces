
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
    int a,b;
    cin>>a>>b;

    int sum1=a+b;

    string s1,s2,s3,s4,s5,s6;
    s1=to_string(a);
    s2=to_string(b);
     s5=to_string(sum1);


    for (int i = 0; i < s1.size(); i++)
    {
        if(s1[i]!='0') s3.push_back(s1[i]); 
    }
    
     for (int i = 0; i < s2.size(); i++)
    {
        if(s2[i]!='0') s4.push_back(s2[i]); 
    }

     for (int i = 0; i < s5.size(); i++)
    {
        if(s5[i]!='0') s6.push_back(s5[i]); 
    }
    int c=stoi(s3);
    int d=stoi(s4);
    int e=stoi(s6);
    int sum2=c+d;

    if(e==sum2) cout<<"YES";
    else cout<<"NO";
    
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}