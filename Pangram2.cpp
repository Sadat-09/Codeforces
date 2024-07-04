#include <bits/stdc++.h>

using namespace std;
int main()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  int cont=0;
  for(int i=0;i<n;i++)
  {
      s[i]= towupper(s[i]);
  }
  sort(s.begin(),s.end());
  for(int i=0;i<n;i++)
  {
      if(s[i]!=s[i+1])
        cont++;
  }
  if(cont==26)
  {
       cout<<"YES";
  }

  else
    cout<<"NO";
return 0;
}
