#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

       
        int first_possible = (a == max({a, b, c})) ? 1 : 0;

        
        int second_possible = (b == max({a, b, c})) ? 1 : 0;

       
        int third_possible = (c == max({a, b, c})) ? 1 : 0;

        cout << first_possible << " " << second_possible << " " << third_possible << endl;
    }

    return 0;
}
