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
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    
    int m;
    cin >> m;
    vector<int> v2(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }
    
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v1[i] - v2[j] == 0 || v1[i] - v2[j] == 1)
            {
                count++;
                
                if(v1[i] == 105 || v2[j] == 105)
                    count--;
                    
                v1[i] = 105;  
                v2[j] = 105;  
                break; 
            }
        }
    }
    
    cout << count << '\n';
}

int main()
{
    IO;
    solve();
    
    return 0;
}
