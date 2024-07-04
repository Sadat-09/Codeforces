
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
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    sort(arr,arr+n);
    double a=arr[0];
    for (int  i = 0; i < arr[n-1]; i++)
    {
        a+=i;
        arr[n-1]-i;
        
    }
    if(a=arr[1]&&arr[n-1]>=arr[n-2]){
     cout << fixed << setprecision(1) << a << endl;

        }
    
 

    
    

  
    
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}