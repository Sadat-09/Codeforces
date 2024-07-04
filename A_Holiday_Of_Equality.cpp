#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }



    int temp=0;
      for (int i = 0; i < n; i++)
    {
        if (max !=arr[i]){
                int r=max-arr[i];
                temp=temp+r;


        }


    }

cout<<temp;



}
