#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int b;
    int p=0;
    int a=0;

    for(int i=0;i<n;i++){
        cin>>b;
        if(b==-1){
                if(p>0){
                    p--;
                }
            else{
                a++;
            }
        }
        else{
            p=p+b;
        }


    }





cout<<a;










}
