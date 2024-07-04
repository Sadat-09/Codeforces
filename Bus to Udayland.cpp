#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s[n];
     for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
    int count=0;
    for(int i=0; i<n; i++){


        if(s[i][0]=='O'&&s[i][1]=='O')
        {
            s[i][0]='+';
            s[i][1]='+';
            count++;
            break;

        }
        else if(s[i][3]=='O'&&s[i][4]=='O')
        {

            s[i][3]='+';
            s[i][4]='+';
            count++;
            break;

        }
}
        if(count>0){
            cout<<"YES"<<endl;


            for(int i=0;i<n;i++)
            {
                cout<<s[i]<<endl;
            }
        }
        else{
            cout<<"NO";
        }




















}
