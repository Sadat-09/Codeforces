
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
{ int n, m;
        cin >> n >> m;
        int totalM= 0;
        
        for (int i = 0; i < n; ++i) {
            string start, end;
            cin >> start >> end;
            
            int startH = stoi(start.substr(0, 2));
            int startM = stoi(start.substr(3, 2));
            int endH = stoi(end.substr(0, 2));
            int endM= stoi(end.substr(3, 2));
            
            totalM+=(endH-startH)*60 +(endM - startM);
        }
        
        if (totalM >= m * 60) {
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