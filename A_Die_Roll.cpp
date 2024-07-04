
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
    #
    int x,y;
    cin>>x>>y;
    int c = max(x,y);
    c = 6 - c;
    int d=6;
    c++;
    if(c==6){
        c/=6;
        d/=6;
    }
    else if(c==4){
        c/=2;
        d/=2;
    }
    else if(c==3){
        c/=3;
        d/=3;
    }
    else if(c==2){
        c/=2;
        d/=2;
    }
    cout<<c<<"/"<<d;
}





 
    


int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}