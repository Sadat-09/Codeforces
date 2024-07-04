
#include <bits/stdc++.h>
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef long long int ll;
typedef long double LD;
#define w(t)     \
    int t;       \
    cin >> t;    \
    while (t--)  \
    {            \
        solve(); \
    }
using namespace std;
bool check_prime(int n) {
  bool is_prime = true;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  return is_prime;
}


void solve()
 {
//       int n, m; 
//         cin >> n >> m;

//         char arr[n][m];
//         string s="vika";
//         int v=0;
//         int i_2=0;
//         int k=0;
//         int a=0;
     
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 cin>>arr[i][j];
//             }
            
//         }
//             for (int i = 0; i < m; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 if(arr[j][i]=='v'){
//                     v++;
//                     break;
//                 }
//                  else if(arr[j][i]=='i'){
//                     i_2++;
//                     break;
//                 }
                 
//                   else if(arr[j][i]=='k'){
//                     k++;
//                     break;
//                 }
//                  else if(arr[j][i]=='a'){
//                     a++;
//                     break;
//                 }





               
//             }
//         }
     
//             if(v>=1&&i_2>=1&&k>=1&&a>=1){
//                 cout<<"YES"<<endl;
//             }
//             else{
//                 cout<<"NO"<<endl;
//             }
            int n,m;
   cin>>n>>m;
    string str="vika";
    char arr[n][m];
    int c=0;
    for(int i=0;i<n;i++)
	{
	  	for(int j=0;j<m;j++)
	  	{	
	  		cin>>arr[i][j];
		}
	} 
    for(int i=0;i<m;i++)
	{
	  	for(int j=0;j<n;j++)
	  	{
            if(arr[j][i]==str[c])
            {
                
                c++;
                break;
            }
        }
    }
    if(c==4)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
        
            }





 
       
        
        

    
   
   
    


int main()
{
    IO;
    //solve();
     w(t);
    return 0;
}