
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
    int a,b,c;
    cin>>a>>b>>c;

    if((a+c)%(2*b)==0){
        cout<<"YES"<<endl;
    }
    else if((2*b-c)>0&&(2*b-c)%a==0){
        cout<<"YES"<<endl;
    }
    else if((2*b-a)>0&&(2*b-a)%c==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
}

int main()
{
    IO;
   // solve();
    w(t);
    return 0;
}