//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//
//string s;
//cin>>s;
//string t;
//cin>>t;
////int x=s.length();
//
//string p;
//
//swap(s[0],s[s.length()-1]);
//
//p=s;
//if(p==t)
//    cout<<"YES";
//else
//cout<<"NO";
//
//}



#include<bits/stdc++.h>
using namespace std;

int main(){

    string s,t;
    cin>>s>>t;

   reverse(s.begin(),s.end());

   string p;
   p=s;


if(p==t)
    cout<<"YES";
else
cout<<"NO";

}

