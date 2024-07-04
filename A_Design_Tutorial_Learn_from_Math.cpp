
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
        cin>>n;

        if(n%2==0){
            cout<<4<<" "<<n-4;
        }
        else{
            cout<<9<<" "<<n-9;
        }
    
    
    
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}