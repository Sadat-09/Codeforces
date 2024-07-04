
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


}


void solve()
{    int n;
        cin >> n;

       
        int count2020 = n % 2020;
        int count2021 = (n - count2020) / 2020 - count2020;

        if (count2020 >= 0 && count2021 >= 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
 }

int main()
{
    IO;
    //solve();
    w(t);
    return 0;
}