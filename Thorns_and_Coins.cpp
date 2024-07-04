
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
    int n;
    cin >> n;

    string s;
    cin >> s;
    int count=0;
    int c=0;
    int t=0;

    for (int i = 0; i < n; i++)
    {
        if(s[i]=='*' and s[i+1]=='*'){
            c++;
            t=i;
            break;
        }
    }
    if(c==0){
         for (int i = 0; i < n; i++)
    {
        /* code */
        if(s[i]=='@') count++;
    }
    cout<<count<<endl;

    }
    else{

    
    for (int i = 0; i < t; i++)
    {
        /* code */
        if(s[i]=='@') count++;
    }
    cout<<count<<endl;
    }

    
    

}

int main()
{
    IO;
    //solve();
    w(t);
    return 0;
}