
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
     int n,c=0,l=0; 
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                cout<<"NO\n";
                return;
            }
        }
        cout<<"YES\n";
}
int main()
{
    IO;
    //solve();
     w(t);
    return 0;
}