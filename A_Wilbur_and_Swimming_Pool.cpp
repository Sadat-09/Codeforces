
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
bool check_prime(int n)
{
    bool is_prime = true;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1)
    {
        is_prime = false;
    }

    for (int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            is_prime = false;
            break;
        }
    }

    return is_prime;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a;
    vector<int> b;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;

        a.push_back(x);
        b.push_back(y);
    }


    int area=-1;
    sort(a.begin(),a.end());
      sort(b.begin(),b.end());

      if(n>1){
        if(a[n-1]!=a[0]&&b[n-1]!=b[0]){
            area=(a[n-1]-a[0])*(b[n-1]-b[0]);
        }
      }
      cout<<area;
}


int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}