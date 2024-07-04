
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
    int count=0;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
    if(arr[i]==arr[i+1]){
        count++;
    }
    }
    for (int i = 0; i < count; i++){ }

}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}