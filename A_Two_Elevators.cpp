
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
     
       int a,b,c;
       cin >> a >> b >> c;
       
        int time1 = abs(a-1);
        int time2 = abs(b-c) + abs(c-1);
        
        if(time1 < time2){
            cout << "1" << endl;
        }
        else if(time1 > time2){
            cout << "2" << endl;
        }
        else{
            cout << "3" << endl;
        }
    }
 


int main()
{
    IO;
    //solve();
     w(t);
    return 0;
}