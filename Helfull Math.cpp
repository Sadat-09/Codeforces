#include<bits/stdc++.h>

using namespace std;

int main(){
string a;
cin>>a;

string p;

for(int i= 0;i<a.length();i++){
        if(a[i]!='+')
        p=p+a[i];







}


sort(p.begin(),p.end());
for(int j=0;j<p.length();j++ )
if(j<p.length()-1)
    cout<<p[j]<<"+";
else
    cout<<p[j];





}
