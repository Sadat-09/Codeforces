#include<bits/stdc++.h>>

using namespace std;

int main() {
  int T; 
  cin >> T;

  for (int i = 1; i <= T; ++i) {
    cout << "Case " << i << ":";

    int n;
    cin>>n;

    bitset<32> ans(n);
    int count=0;

    for (int i = 0; i < ans.size(); i++)
    {
        if(ans[i]==1) count++;
        
    }
    if(count%2==0) cout<<" "<<"even"<<endl;
    else cout<<" "<<"odd"<<endl;
    
  

  }
}