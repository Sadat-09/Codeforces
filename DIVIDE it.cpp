
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;



    for(int i=0;i<q;i++){
            long long n;
    cin>>n;
int a1=0, a2=0, a3=0;
        while(n%2==0 || n%3==0 || n%5==0){

            if(n%2==0){
                n=n/2;
                a1++;
            }
              if(n%3==0){
                n=2*n/3;
                a2++;
            }
              if(n%5==0){
                n=4*n/5;
                a3++;
            }


        }

      if (n == 1) {
		cout << a1 + a2 + a3  << endl;
		} else {
			cout << -1  << endl;
		}






    }




}
