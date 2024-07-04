#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;

    cin >> a;
    for (int i = 1; i <= 5; i++){
        cin >> b;
        if (a[0] == b[0] || a[0] == b[1] || a[1] == b[0] || a[1] == b[1]){
            cout << "YES";
            break;

        }
    }
    cout << "NO";
}










