
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k;
    int count=0;

    for(int i=0;i<n;i++){
            cin>>k;
            if(k==0){
                count++;
            }

    }

    if(count==n){
        cout<<"Easy";
    }
    else{
        cout<<"Hard";



    }
}


