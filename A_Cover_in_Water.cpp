
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
     cin >> n;
    string s;
     cin >> s;    
    int dt = 0; 
    for (int i = 0; i < n; i++)
    {
        if(s[i] == s[i + 1] && s[i + 1] == s[i + 2] && s[i] == '.' && i < n - 2) {
            cout << 2 << endl;
            return;
        }
        if(s[i] == '.') {
            dt++;
        }
    }
    cout << dt << endl;
}
    
    


int main()
{
    IO;
    //solve();
     w(t);
    return 0;
}