#include<bits/stdc++.h>
using namespace std;

 int main(){
    int n;
    cin>>n;
    int p,q;
    cin>>p>>q;
    
    set<int> s;
    for(int i=0;i<p;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    for(int i=0;i<q;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    (s.size()==n)? cout<<"I become the guy." :cout<<"Oh, my keyboard!"<<endl;
    return 0;


  
 }
