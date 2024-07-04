
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
    cout<<2<<endl;
    cout<<n-1<<" "<<n<<endl;

    while(n>2){
        cout<<n-2<<" "<<n<<endl;
        n--;
    }


}

int main()
{
    IO;
   // solve();
     w(t);
    return 0;
}