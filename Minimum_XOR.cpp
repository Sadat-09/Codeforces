




#include <bits/stdc++.h>
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef unsigned long int ll;
#define int long long
typedef long double LD;
#define all(x) x.begin(),x.end()
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
    int n; cin >> n;
    vector<int> arr(n);
    int even = 0, odd = 0;
    vector<int> evenArr;
    vector<int> oddArr;
     vector<int> result;
    


     

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] % 2) {odd++; oddArr.push_back(arr[i]);}
        else {even++; evenArr.push_back(arr[i]);}
    }
    int r2 = arr[0];

    
    for (int i = 1; i < n; ++i) {
        r2 ^= arr[i];
    }
    sort(all(evenArr));
    sort(all(oddArr));
    int result =0;
    if(even >= odd) {
        for (int i = 0; i < n; i++)
        {
            if(arr[i] != oddArr.back())
                result ^= arr[i];
        }
    } else {
        for (int i = 0; i < n; i++)
        {
            if(arr[i] != evenArr.back())
                result ^= arr[i];
        }
    }
    int ansr=min(r2,result[0]);
    cout << ansr << endl;
  
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}