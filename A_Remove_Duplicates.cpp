
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
    cin>>n;
    int l=0;

    int arr[n];
    set<int>s;
    stack<int>st;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
       

    }

    for (int i = n - 1; i >= 0; i--){
        s.insert(arr[i]);
        if (s.size() != l) {
            l++;
            st.push(arr[i]);
        }
    }
    cout << s.size() << endl;
    while (!st.empty()){
        cout << st.top() << ' ';
        st.pop();
    }

   
    
    
    
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}