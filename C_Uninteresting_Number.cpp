#include <iostream>
#include <string>
using namespace std;

bool isDivisibleBy9(const string& n) {
    int digitSum = 0;

    // Calculate the sum of digits in the number
    for (char c : n) {
        int digit = c - '0';
        if (digit == 3 || digit == 6 || digit == 9) {
            // These digits remain divisible by 9 after squaring
            return true;
        }
        digitSum += digit;
    }

    // Check if the sum of digits is divisible by 9
    return digitSum % 9 == 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        string n;
        cin >> n;

        if (isDivisibleBy9(n)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}