
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
    int n;cin>>n;
    int arr[n];
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    sort(arr,arr+n);
    //   for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i];
    // }
    int l=0;
    int r=n-1;
    int ansr=0;
    while(l<r){
        ansr+=(arr[r]-arr[l]);
        l++;r--;

    }
    cout<<ansr<<endl;

    
}

int main()
{
    IO;
    // solve();
    w(t);
    return 0;
}