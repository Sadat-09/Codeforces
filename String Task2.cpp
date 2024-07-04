#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
     char new_char = '.';



    for(int i=0;i<s.length();i++){
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y'){
            continue;
        }
        else if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'){
            continue;
        }
        else{
                   cout<<"."<<(char)tolower(s[i]);
        }
    }




}
