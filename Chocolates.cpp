#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int  n; cin >> n;
    vector<long long int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = n - 1; i > 0; i--)
    {
        if(arr[i] <= arr[i - 1]) arr[i - 1] = arr[i] - 1;
        if(arr[i] == 0) arr[i - 1] = 0;
    }
    long long int ans = accumulate(arr.begin(), arr.end(), (long long int)0);
    cout << ans << endl;

}