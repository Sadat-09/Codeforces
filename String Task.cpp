
#include<iostream>
using namespace std;
int main()
{
    string s,s1;
    cin>>s;
    int x=s.length();
    for(int i=0;i<x;i++)
    {
        if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U'||s[i]=='y'||s[i]=='Y')
        {
            continue;
        }
        else
        {
            s1+='.';
            s1+=towlower(s[i]);
        }
    }
   cout<<s1;
}
