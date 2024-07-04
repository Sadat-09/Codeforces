
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


// void solve()
// {
//     int n;
//     cin>>n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//        int* ma = max_element(arr, arr + n);
//     int* mi=min_element(arr,arr+n);

//     cout<<*ma-*mi<<endl;
// }


void solve()
{
    int n;
    cin>>n;

    int arr[n];
    int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
   for (int i = 0; i < 3; i++)
   {
    sum1+=arr[i];
   }
    for (int i = 3; i < 6; i++)
   {
    sum2+=arr[i];
   }
    for (int i = 6; i < 9; i++)
   {
    sum3+=arr[i];
   }
   for (int i = 9; i < 12; i++)
   {
    sum4+=arr[i];
   }
   for (int i = 12; i < 15; i++)
   {
    sum5+=arr[i];
   }

   int m=max({sum1,sum2,sum3,sum4,sum5});
   int b=min({sum1,sum2,sum3,sum4,sum5});

   cout<<m-b<<endl;


}
   

int main()
{
    IO;
    //solve();
     w(t);
    return 0;
}