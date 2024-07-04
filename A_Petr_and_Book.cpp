
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
    ll n;
    cin>>n;

    ll arr[7];
    ll temp=0;
    int index;
    
     for (int i = 0; i < 7; i++)
    {
        cin>>arr[i];
    }
    
  
    // for (int i = 0; i < n; i++)
    // {
    //     temp+=arr[i];
    //     if(temp>=n){
    //         cout<<i+1;
    //         break;
    //     }

    // }
    while (temp<n){
    
  for (int i = 0; i < 7; i++)
    {
        temp+=arr[i];
      
       
        if(temp>=n){
          index=i;
            break;
        }
    }
        
    }
    
    cout<<index+1;
 
    
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}