#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0;i<n;i++){
        for (int j = 0; j < m; j++)
     {
            /* code */
            cin>>arr[i][j];
        }
        
    }


    for (int i = 0; i < m; i++)
    {
        
        for (int j = 0; j < n; j++)
        {
            /* code */
            cout<<arr[j][i];
        }
        cout<<endl;
        
    }
    
  


}
