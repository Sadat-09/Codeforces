#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c;
    cin>>n>>c;

    int count=0;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]-arr[i+1]==c)
        {
            count++;
        }
    }
    cout<<count;












}
