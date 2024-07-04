#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int f=n*3;
    int count=0;
    int arr[f];
    for(int i=0;i<f;i++){
        cin>>arr[i];
    }
    for(int j=0;j<f;j++){

        count=count+arr[j];
    }
    if(count==0){
        cout<<"yes"<<endl;
    }
    else{
         cout<<"no"<<endl;
    }


}
