
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

void solve()
{
    int n; cin>>n;
    int arr[n];
    int one=0;
    int two=0;
    int three=0;
    vector<int>v1;
      vector<int>v2;
        vector<int>v3;
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
       if(arr[i]==1){ one++;}
        if(arr[i]==2){ two++;}
         if(arr[i]==3){ three++;}


    }
    

    int d=min({one,two,three});
    
    if(one>=d && two>=d && three>=d){
        cout<<d<<endl;
    }
    else{
        cout<<0;
    }

    
     for (int i = 0; i < n; i++){
        if(arr[i]==1){
            v1.push_back(i);
        }
         if(arr[i]==2){
            v2.push_back(i);
        }
         if(arr[i]==3){
            v3.push_back(i);
        }
     }
     
     for (int i = 0; i < d; i++){
        cout<<v1[i]+1<<" "<<v2[i]+1<<" "<<v3[i]+1<<endl;

     }

    
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}