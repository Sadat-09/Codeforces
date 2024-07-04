
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
    int n, c, d;
    cin >> n >> c >> d;

    int ar[n];

    for (int i = 0; i < n; i++)
    {

        cin >> ar[i];
    }
   int arr[n][n];


   arr[0][0] = 1; 

    // Fill the array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0)
                continue; 
            arr[i][j] = arr[i - 1][j] + d; 
            if (j > 0)
                arr[i][j] += c * i;
        }
   
        
}

int main()
{
    IO;
    // solve();
    w(t);
    return 0;
}