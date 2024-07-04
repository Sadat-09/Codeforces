
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
    int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<0<<endl;
        return;
    }
    int n=abs(a-b);

    if(n>10){
        if(n%10!=0){
        cout<<(n/10)+1<<endl;
        }
        else{
            cout<<(n/10)<<endl;
        }
    }
    if(n<=10){
        cout<<1<<endl;
    }


    
}

int main()
{
    IO;
    //solve();
    w(t);
    return 0;
}