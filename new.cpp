#include<bits/stdc++.h>

#define IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
#define all(X) (X).begin(), (X).end()
#define pb push_back
#define gcd(a, b) __gcd(a, b)
#define LCM(a, b) (a * b) / gcd(a, b)
typedef long long int ll;
typedef long double LD;

using namespace std;

int  solve(int array[],int n){
    int count=0;


    for(int i=0;i<n;i++){
        if(array[i]>=50){
            count++;



        }

    }

    cout<<"passsed"<<count<<endl;

}

int main()
{
  IO;
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<=n;i++){

    cin>>arr[n];
  }


     solve(arr,n);
    //ll t; cin>>t;
    //while(t--)
    // {
    //     solve();
    // }
    //return 0;
}
