
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
    // int arr[3][3];

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin>>arr[i][j];
    //     }
        
    // }

    
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         if(arr[i][j]=='?'){
    //             if(j==1){
    //                 if(arr[i][0])
    //             }
    //         }
           
    //     }
        
    // }
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    string b1;
    int A=0;
    int B=0;
    int C=0;

    for (int i = 0; i < s1.size(); i++)
    {
        if(s1[i]=='A') A++;
        if(s1[i]=='B') B++;
        if(s1[i]=='C') C++;
      
      
    }

    
    for (int i = 0; i < s2.size(); i++)
    {
        if(s2[i]=='A') A++;
        if(s2[i]=='B') B++;
        if(s2[i]=='C') C++;
       
    }

     for (int i = 0; i < s3.size(); i++)
    {
        if(s3[i]=='A') A++;
        if(s3[i]=='B') B++;
        if(s3[i]=='C') C++;
       
    }

    if(A==2) cout<<"A"<<endl;
    
    if(B==2) cout<<"B"<<endl;
    
    if(C==2) cout<<"C"<<endl;
    
     
    
}

int main()
{
    IO;
    //solve();
    w(t);
    return 0;
}