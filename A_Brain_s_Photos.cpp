
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
    int n,m;
    cin>>n>>m;
    int count =0;

    string arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == "C" || arr[i][j] == "M" || arr[i][j] == "Y")
            {
               count++;
            }
           
        }
        
    }
    if(count>0){
        cout<<"#Color";
    }
    else{
        cout<<"#Black&White ";
    }
    
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}