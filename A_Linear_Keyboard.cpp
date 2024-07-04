
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
    string s,t;
    cin>>s>>t;

    vector<int>v;
    int sum=0;

    for (int  i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < t.length(); j++)
        { if(s[i]==t[j]){
            v.push_back(i);
        }
        }
        
       
    }
    for (auto i:v)
    {
       sum+=abs(v[i]-v[i+1]);
    }
    
    cout<<sum<<endl;

    
}

int main()
{
    IO;
    //solve();
    w(t);
    return 0;
}