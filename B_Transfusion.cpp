
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
vector<long long> a(n);
for (int i = 0; i < n; ++i) {
    cin >> a[i];
}
long long sum = accumulate(a.begin(), a.end(), 0LL);
if (sum % n != 0) {
    cout << "NO\n";
    return;
}
long long target = sum / n;
long long need = 0;
for (int i = 0; i < n; ++i) {
    need += a[i] - target;
    if (need < 0) {
        cout << "NO\n";
        return;
    }
}
cout << "YES\n";
int n;
cin >> n;
vector<int> a(n);
for(int i = 0; i < n; i++) {
    cin >> a[i];
}

ll sum = accumulate(a.begin(), a.end(), 0LL);
if(sum % n != 0) {
    cout << "NO\n";
    return;
}

ll target = sum / n;
bool possible = true;
for(int i = 1; i < n - 1; i++) {
    ll left_diff = a[i-1] - target;
    ll right_diff = a[i+1] - target;
    if((left_diff > 0 && right_diff < 0) || (left_diff < 0 && right_diff > 0)) {
        if(abs(left_diff) != abs(right_diff)) {
            possible = false;
            break;
        }
    }
}

cout << (possible ? "YES\n" : "NO\n");
   
    
}

int main()
{
    IO;
    //solve();
    w(t);
    return 0;
}