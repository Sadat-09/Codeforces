
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
    ll n,k;
    cin>>n>>k;


vector<pair<int,int>>a(n);
 
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first;
    }
 
    for(int i=0;i<n;i++)
    {
        cin>>a[i].second;
    }

    sort(a.begin(),a.end());
    int gb=k;

    for (int i = 0; i < n; i++)
    {
        if(a[i].first<=gb){

            gb+=a[i].second;

        }
        
    }
    cout<<gb<<endl;



}

 int n,m,k,H, count = 0; cin >> n >> m >> k >> H;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        int temp = abs(arr[i] - H);
        if(temp % k == 0 and temp / k < m and temp / k > 0) count++;
    }
    cout << count << endl;
}

int main()
{
    IO;
    //solve();
     w(t);
    return 0;
}