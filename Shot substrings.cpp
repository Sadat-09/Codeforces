#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;



    while(t--){
             string s;
    cin>>s;
      int n=s.size();
    cout<<s[0];
            for(int i=1;i<s.size()-1;i++){
                if(i%2==0){
                    cout<<s[i];
                }
            }



cout<<s[n-1]<<endl;


    }

}
