
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
    int n; cin>>n;
    int arr[n]; int total,sum,count=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        total+=arr[i];

    }
    sort(arr,arr+n);
    int half=total/2;

    for (int i = n-1; i >=0; i--)
    {
       sum+=arr[i];
       count++;
       if(sum>half){
        break;
       }
    }
    
cout<<count<<endl;
    
    
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}