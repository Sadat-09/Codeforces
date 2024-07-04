#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        
    
    
    
    int arr[6];
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }
    int sum1=arr[0]+arr[1]+arr[2];
    int sum2=arr[3]+arr[4]+arr[5];
    if(sum1==sum2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }

}