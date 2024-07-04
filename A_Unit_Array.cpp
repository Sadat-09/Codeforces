
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
     cin >> n;
    int arr[n];
    int plus = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] == 1) plus++;
    }
    int r = n / 2;
    int ans = 0;
    if(n % 2!=0)
    { 
        r++;
    }
    if(plus < r) {
        ans = r - plus; 
        plus += ans;
    }
    else ans = 0;
    if((n - plus) % 2){
         ans++;
    }
    cout << ans << endl;

 

   }

    
    


int main()
{
    IO;
   // solve();
     w(t);
    return 0;
}