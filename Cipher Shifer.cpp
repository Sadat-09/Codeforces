#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();  // Ignore the newline character after reading t

    while (t--) {
        int n;
        cin >> n;
        cin.ignore();  // Ignore the newline character after reading n

        string s;
        getline(cin, s);  // Read the entire line including spaces

        string decrypted = "";
        for (int i = 0; i < n; i += 2) {
            decrypted += s[i];
        }

        cout << decrypted << endl;
    }

    return 0;
}
