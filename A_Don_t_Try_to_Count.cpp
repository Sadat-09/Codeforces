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
    int n, m; 
    cin >> n >> m;
    string x, s;
     cin >> x >> s;
     int pos=0;
    for (int i = 0; i < m; i++)
    {
       int pos = x.find(s);
        
        if(pos!=0){
            cout<<pos;
            return;
        }
        else{
            continue;
        }
        x += x;

    }
    if(pos==0){
        cout << -1 << endl;
    }
}
  
    

int main()
{
    IO;
   
    w(t);
    return 0;
}

