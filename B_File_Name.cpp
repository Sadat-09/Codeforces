
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



void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;

  for (int i = 0; i < s.size()-2; i++)
  {
    if(s[i]=='x'&&s[i+1]=='x'&&s[i+2]=='x') ans++;
  }
  cout<<ans;

    
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}