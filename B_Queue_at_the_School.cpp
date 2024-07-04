
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
    int a,b; cin>>a>>b;
    string s; cin>>s;

 
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if(s[j]=='B'&& s[j+1]=='G'){
                swap(s[j],s[j+1]);
                j++;
            }
            
        }
        
    }
    for (int j = 0; j < a; j++)
        {
            cout<<s[j];
        }
    
    
    
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}