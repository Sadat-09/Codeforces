#include<bits/stdc++.h>
using namespace std;

int main(){

 string s;
 cin>>s;

 int count1=0;
 int count2=0;
string ss;


 for(int i=0;i<s.length();i++){

      if(s[i]>=65&&s[i]<=90){

        count1++;
      }
      else{
    count2++;
}

 }
 for(int j=0;j<s.length();j++){
 if(count1>count2)
     ss+= toupper(s[j]);
 else if(count1==count2)
   ss+= tolower(s[j]);

 else
    ss+= tolower(s[j]);

 }
 cout<<ss;




}
