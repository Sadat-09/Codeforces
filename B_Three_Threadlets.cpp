#include <iostream>
using namespace std;

string solve(int a, int b, int c) {
    int sum = a + b + c;
    if (sum % 3 != 0) {
        return "NO";
    }
    int target = sum / 3;
    if (a > target || b > target || c > target) {
        return "NO";
    }
    return "YES";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << solve(a, b, c) << endl;
    }
    return 0;
}
 