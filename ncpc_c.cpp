#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int testcase = 1; testcase <= t; testcase++)
    {
        int n;
        cin >> n;

        int arr1[n];
        int arr2[n];
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        int firstOmil = 0;
        int lastOmil = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr1[i] != arr2[i]) {
                firstOmil = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr1[i] != arr2[i]) {
                lastOmil = i;
                break;
            }
        }
        int ans = 0;
        if(firstOmil == 0 and lastOmil == n - 1) ans = n;
        else ans = lastOmil - firstOmil;
        cout << "Case " << testcase << ": " << ans << endl;
    }
}