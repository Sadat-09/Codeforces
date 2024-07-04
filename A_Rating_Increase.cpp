
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
	string str;
	cin >> str;
	
	for(int i=0; i<str.size()/2; i++)
	{
		string s1 = str.substr(0, i+1);
		string s2 = str.substr(i+1);
		
		if(s1[0] == '0' || s2[0] == '0'){
             continue;
        }
		
		int x1 = stoi(s1.c_str());
		int x2 = stoi(s2.c_str());
		
		if(x2 > x1)
		{
			cout << x1 << " " << x2 <<endl;
			return;
		}
	}
	
	cout << -1 <<endl;

}

int main()
{
    IO;
    //solve();
     w(t);
    return 0;
}