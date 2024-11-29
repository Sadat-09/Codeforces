
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
    int n,m,k;
    cin>>n>>m>>k;
    int arr1[n];
    int arr2[n];
    map<int,int> mp1,mp2;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
        mp1[arr1[i]]++;
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
        mp2[arr2[i]]++;
    }
    int x=0,y=0;
    for(int i=1;i<=k;i++){
        if(mp1[i]>0 and mp2[i]>0){
           x++;
           y++;
        
        }
        else if(mp1[i]>0){
            x++;
        }
        else if(mp2[i]>0){
            y++;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }

    }

         if((x>=(k/2))&&(y>=(k/2))){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    
    

}

int main()
{
    IO;
    //solve();
    w(t);
    return 0;
}