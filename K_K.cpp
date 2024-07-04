
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

bool isPrime(int n)
{
   
    if (n <= 1)
        return false;
    
    if (n == 2 || n == 3)
        return true;
  
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    
    for (int i = 5; i <= sqrt(n); i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}

int smallestDivisor(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return i;
        }
    }

    return n;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    if(n==k){
        cout<<"NO"<<endl;
        return;
    }

    if(isPrime(n)){
        cout<<"NO"<<endl;
        return;


    }
    int l = smallestDivisor(n);

    if (n / l >= k)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    IO;
    // solve();
    w(t);
    return 0;
}