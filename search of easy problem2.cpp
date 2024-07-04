

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k[n];
    int count=0;

    for(int i=0;i<n;i++){
            cin>>k[i];
            count=count+k[i];


    }

    if(count==0){
        cout<<"Easy";
    }
    else{
        cout<<"Hard";



    }
}


