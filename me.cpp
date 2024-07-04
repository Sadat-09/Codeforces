#include<iostream>
using namespace std;


int main(){
    int n,k;
    cin>>n>>k;
    int a[n];

    for(int i=0;i<n;i++){


        cin>>a[i];
        int s=0;

        if(a[i]>k){

            s=s+1;
        }
        cout<<s;



    }





}
