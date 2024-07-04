#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll m,n,a,len,bed;
	cin>>m>>n>>a;
	if(m%a==0){
        len=m/a;
	}
	else{
        len=m/a+1;
	}

	if(n%a==0){
        bed=n/a;
	}
	else{
        bed=n/a+1;
	}

	cout<<len*bed<<endl;
     return 0;
}
