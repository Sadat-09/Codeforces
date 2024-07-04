#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
string s;
cin>>s;
string p;
//sort(s.begin(),s.end());
int c1=0;
int c2=0;


for(int j=0;j<n;j++){
    if(s[j]=='A'){
        c1++;
    }
    else if(s[j]=='D'){
        c2++;
    }



}

if(c1>c2){
    cout<<"Anton";
}
else if(c1<c2){
    cout<<"Danik";
}
else if(c1==c2
        ){
    cout<<"Friendship";
}

}


