
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
    int arr[m];


    for (int i = 0; i < m; i++)
    {
        cin>>arr[i];
    }
    
    ll count=arr[0]-1;
     for (int i = 0; i < m-1; i++)
    {
        if(arr[i]>arr[i+1]){
            count+=n-(arr[i]-arr[i+1]);

        }
        else if(arr[i]<arr[i+1]){
            count+=arr[i+1]-arr[i];
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