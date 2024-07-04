#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c; cin>>a>>b>>c;
    int ansr=0;

    for(int i=1;i<=a;i++){
        if(i*2<=b&&i*4<=c){
         continue;
        }
        ansr=i;
    }
    cout<<ansr;













}
