
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
    int arr[n];
    int sum=0;
    int count=0;
 
    vector<int>v;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i]<0) v.push_back(arr[i]);
        
    }
    sort(v.begin(),v.end());
     m = min(m, static_cast<int>(v.size()));

    for (int i = 0; i < m; i++)
    {
        sum+=v[i];
    }
      
//    while (count<=m)
//    {
//         sum+=v[count];
//         count++;
//    }
   
    
cout<<sum*-1;
    
    


    
    
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}