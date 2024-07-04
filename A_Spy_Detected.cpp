#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];

        for(int i=1;i<=n;i++){
            cin>>arr[i];

        }
        sort(arr,arr+n);

        for(int j=1;j<=n;j++){
//            if(arr[i]!=arr[i+1]){
                cout<<arr[j]<<" ";
//           }
        }

    }

}

