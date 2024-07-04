
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    int r=2;
    string arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
//string s;
//cin>>s;
    cout<<arr[0];
    for(int i=0;i<t;i++){

        cout<<arr[i][i+r];
        r++;
    }


}
