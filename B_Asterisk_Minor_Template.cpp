
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
    string s1;
    cin>>s1;

    if(s[0]==s1[0]){
        cout<<"YES"<<endl;
        cout<<s[0]<<"*"<<endl;
    }
    else if(s[s.size()-1]==s1[s1.size()-1]){
        cout<<"YES"<<endl;
        cout<<"*"<<s[s.size()-1]<<endl;


    }
        else {
        for (int i = 0; i < s.size() - 1; i++)
        {
            for (int j = 0; j < s1.size() - 1; j++)
            {
                if(s[i] == s1[j] && s[i + 1] == s1[j + 1]) {
                    cout << "YES\n" << "*" << s[i] << s[i + 1] << "*" << endl; 
                    return;
                }
            }
        }
        
        cout << "NO" << endl;
    }   
    
}

int main()
{
    IO;
    //solve();
     w(t);
    return 0;
}