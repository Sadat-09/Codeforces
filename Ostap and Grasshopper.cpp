
#include<bits/stdc++.h>

using namespace std;
int main()
{

    long long  x,y,z,a,b,c=1;

    cin>>a>>b;
    char T[a];
    for(int i=0; i<a; i++)
    {
        cin>>T[i];
        if(T[i]=='G')
        {
            x=i;
        }
        if(T[i]=='T')
        {
            y=i;
        }
    }
    if(x>y)
    {
        for(int i=y; i<a; i+=b)
        {
            if(T[i]=='#')
            {
                c=1;
                break;
            }
            if(T[i]=='G')
            {
                c=0;
                break;
            }
        }
        if(c==0)
        {
            cout<<"YES";
        }
        else
            cout<<"NO";
    }
    else
    {
        for(int i=x; i<a; i+=b)
        {
            if(T[i]=='#')
            {
                c=1;
                break;
            }
            if(T[i]=='T')
            {
                c=0;
                break;
            }
        }
        if(c==0)
        {
            cout<<"YES";
        }
        else cout<<"NO";
    }
}
