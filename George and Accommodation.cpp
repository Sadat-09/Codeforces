#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;

int p,q;
int count=0;

for(int i=0;i<n;i++){
    cin>>p>>q;

    int c=q-p;
    if(c>=2){
        count++;
    }

}
cout<<count;
}
