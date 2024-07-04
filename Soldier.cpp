#include<iostream>
using namespace std;

int main(){

    int k,n,w;
    cin>>k>>n>>w;
    int s=0;
    int m=0;

    for(int i=0;i<=w;i++){

        s=i*k;
        m=m+s;


    }
    if(m<=n){
        cout<<"0"<<endl;
    }
    else{
        cout<<m-n<<endl;
    }

}
