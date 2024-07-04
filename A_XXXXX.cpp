
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
    int n,x;
    cin>>n>>x;

    int arr[n];
    int sum=0;
    int count=0;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        if(arr[i]%x==0){
            count++;
        }
    }
    if(count==n){
        cout<<-1<<endl;
        return;
    }
    if(sum%x!=0){
        cout<<n<<endl;
    }
    else{
        int total=sum;
        int min=0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            total-=arr[i];
            if(total%x!=0){
            min=max(min,n-i-1);
            break;
            }

        }
          total=sum;
        for (int i = n-1; i >=0; i--)
        {
            /* code */
            total-=arr[i];
            if(total%x!=0){
            min=max(min,i);
            break;
            }

        }
        cout<<min<<endl;
        
    }

    
    
}

int main()
{
    IO;
    // solve();
    w(t);
    return 0;
}