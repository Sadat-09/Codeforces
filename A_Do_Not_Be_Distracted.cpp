
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
    int n; cin >> n;
    string s; cin >> s;
    for (int i = 0; i < n - 1; i++)
    {
        if(s[i] != s[i + 1])
            for (int j = i + 1; j < n; j++)
            {
                if(s[i] == s[j]) {
                    cout << "NO" << endl;
                     return;}
            }
    }
    cout << "YES" << endl;

    }
   
    
    
    


int main()
{
    IO;
    //solve();
    w(t);
    return 0;
}