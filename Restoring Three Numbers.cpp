
#include <iostream>
using namespace std;

int main() {
    int a[4];

    for(int i=0;i<4;i++){
        cin>>a[i];
    }

    int max = a[0];


    if (a[1] > max) {
        max = a[1];
    }


    if (a[2] > max) {
        max = a[2];
    }

    if (a[3] > max) {
        max = a[3];
    }



    for(int i=0;i<4;i++){
        if(max-a[i]!=0){
                 cout<<max-a[i]<<" ";

        }

    }


}
