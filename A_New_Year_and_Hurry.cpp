
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
    int count=0;
    int ansr=0;

    for(int i=1;i<=n;i++){
        ansr+=i*5;
       
        if(ansr+m<=240){
           count++;
            
        }
        else{
            break;
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