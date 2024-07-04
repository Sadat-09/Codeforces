
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
     int n, k;
    cin >> n >> k;
    vector<int> arr1(n);
    vector<pair<int, int>> indexedArr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
        indexedArr[i] = {arr1[i], i}; 
    }

    sort(indexedArr.begin(), indexedArr.end());

    int i = 0;
    int sum = 0;
    while (i < n && sum + indexedArr[i].first <= k) {
        sum += indexedArr[i].first;
        i++;
    }

    cout << i << endl;

   
    for (int j = 0; j < i; j++) {
        cout << indexedArr[j].second + 1 << " "; 
    }
  
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}