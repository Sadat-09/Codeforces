#include <iostream>
using namespace std;
int main()
{
	long long x,n,sum=0,ne=0,z=0;
	cin>>n;
	for(int i=0;i<n;i++)
{	cin>>x;
if (x<0)
{ ne++;
	sum+=abs(x+1);

}
	else if(x==0)

	{z++;
		sum+=1;
	}
	
	else if(x>0)
	{ 
	sum+=abs(x-1);
}
}
if(ne%2!=0&&z==0)sum+=2;
cout<<sum<<endl;
}
	
