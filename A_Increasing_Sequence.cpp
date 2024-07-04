
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
       solve2(); \
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
    cin>>n;
    int arr[n];
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    if(arr[0]==1){
        for (int i = 0; i <n ; i++)
        {
          v.push_back(arr[i]+1);  
        }
        
    }
    else if(arr[0]!=1){
        for (int i = 0; i <n ; i++)
        {
          v.push_back(arr[i]-1);  
        }
        
    }
    cout<<v[v.size()-1]<<endl;
}

void solve2(){
     int n;
    cin>>n;
    int arr[n];
    int count=1;
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
      for (int i = 0; i < n; i++)
    {
        if(arr[i]<arr[i+1]){
            count++;
        }
    }
    if(arr[0]!=1&&count==n){
        cout<<arr[n-1]-1<<endl;
    }
    else if(arr[0]!=1&&count!=n){
        cout<<arr[n-1]+1<<endl;
    }
    else if(arr[0==1]){
        cout<<arr[n-1]+1<<endl;
    }
    
}

int main()
{
    IO;
    //solve();
    w(t);
    return 0;
}