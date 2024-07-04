#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
     vector<int>v2;
   
     
  

    for(auto i:v){
          
        cin>>i;
        v.push_back(i);
    }
     int s=v.size();

    for(int i=0;i<s;i++){
         v2.push_back(v[i] * v[i]);
    }

    sort(v2.begin(),v2.end());

    for(int i=0;i<s;i++){
        cout<<v2[i]<<" ";
    }


}