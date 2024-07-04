#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {

        int k, x;
    cin >> k >> x;
    if (k%x) {
        cout << 1 << "\n" << k << "\n";
    } else {
        cout << 2 << "\n" << k-1 << " " << 1 << "\n";
    }

    }
}











