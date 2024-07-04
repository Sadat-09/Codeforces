#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string c="codeforces";
        string s;
        cin>>s;
        int count=0;

        for(int i=0; i<c.size(); i++)
        {
            if(c[i]!=s[i])
            {
                count++;
            }

        }
        cout<<count<<endl;





    }
}
