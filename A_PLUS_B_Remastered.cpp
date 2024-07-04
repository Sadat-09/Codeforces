
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
bool check_prime(int n) {
  bool is_prime = true;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  return is_prime;
}


void solve() // A PLUS B Remastered
{    int n;



    cin>>n;
    int a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    sort(a,a+n),sort(b,b+n),reverse(a,a+n);
    int c = a[0]+b[0],f = 1;
    for (int i = 1; i < n; ++i)
    {
        if (a[i]+b[i] != c)
        {
            f = 0;
            break;
        }
    }
    if (f)
    {
        for (int i : a)
        {
            cout<<i<<' ';
        }
        cout<<endl;
        for (int i : b)
        {
            cout<<i<<' ';
        }
        cout<<endl;
        return;
    }
    reverse(a,a+n),reverse(b,b+n);
    c = a[0]+b[0],f = 1;
    for (int i = 1; i < n; ++i)
    {
        if (a[i]+b[i] != c)
        {
            f = 0;
            break;
        }
    }
    if (f)
    {
        for (int i : a)
        {
            cout<<i<<' ';
        }
        cout<<endl;
        for (int i : b)
        {
            cout<<i<<' ';
        }
        cout<<endl;
        return;
    }
    cout<<"-1\n";
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}