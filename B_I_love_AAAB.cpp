#include <bits/stdc++.h>
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef long long int ll;
typedef long double LD;
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
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
   string s;
   
 
    int a=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
       if(s[i]=='A') a++;
       else a--;
       if(a<0) break;
    }
    if(a<0 || s[s.size()-1]=='A' || s[0]=='B'){
        no
    }
    else yes
   }


int main()
{
    IO;
    w(t);
    return 0;
}
