
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
    int n; cin>>n;
    int home[n]; int away[n];
    int count=0;

    for (int i = 0; i < n; i++)
    {
        cin>>home[i]>>away[i];
    }
      for (int i = 0; i < n; i++)
    {
          for (int j = 0; j < n; j++)
    {
        if(home[i]==away[j]){
            count++;
        }

    }
    }
    cout<<count;

    
    
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}