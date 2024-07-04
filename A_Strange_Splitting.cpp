
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


void solve()
{
     int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (a[0] != a[n-1]) {
            cout << "YES"<<endl;
            string s(n, 'B');
            s[0] = 'R';  
            cout << s << endl;
        } else {
            bool flag = false;
            for (int i = 1; i < n; i++) {
                if (a[i] != a[0]) {
                    flag = true;
                    cout << "YES"<<endl;
                    string s(n, 'R');
                    for (int j = i; j < n; j++) {
                        s[j] = 'B';
                    }
                    cout << s <<endl;
                    break;
                }
            }
            if (!flag) {
                cout << "NO"<<endl;;
            }
        }
}

int main()
{
    IO;
    //solve();
    w(t);
    return 0;
}