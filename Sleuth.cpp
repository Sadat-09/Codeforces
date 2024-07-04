#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;

    getline(cin, s);


    s.erase(remove_if(s.begin(), s.end(), [](unsigned char c) {
        return isspace(c);
    }), s.end());


    if(s[s.size()-2]=='a'||s[s.size()-2]=='e'||s[s.size()-2]=='i'||s[s.size()-2]=='o'||s[s.size()-2]=='u'||s[s.size()-2]=='y'||s[s.size()-2]=='A'||s[s.size()-2]=='E'||s[s.size()-2]=='I'||s[s.size()-2]=='O'||s[s.size()-2]=='U'||s[s.size()-2]=='Y'){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    return 0;
}
