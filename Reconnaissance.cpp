#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,d;
    cin>>n>>d;
    int count=0;

    int arr[1000];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(abs(arr[i]-arr[j])<=d)
            {
                count+=2;
            }
        }
    }

    cout<<count;




}
