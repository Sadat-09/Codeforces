#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;


    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int count=0;
        int ansr=0;

               for(int i=0;i<n;i++){
                if(arr[i]==0){
                    count++;
                    ansr=max(ansr,count);
                }

                if(arr[i]==1){
                    count=0;
                }




               }
               cout<<ansr;




    }













}
