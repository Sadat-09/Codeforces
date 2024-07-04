#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
      int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int left,right,mid;
    left=0;
    right=n-1;
    while (left<=right)
    {
        mid=(left+right)/2;

        if(arr[mid]==x){
            cout<< mid;

        }
        if(arr[mid]<x){
            left=mid+1;

        }
        else{
            right=mid-1;
        }


    }
    cout<<-1;

}
