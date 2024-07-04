#include <iostream>
#include <vector>

using namespace std;

const int MOD = 20240401;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int count_zero = 0;
    int count_one = 0;
    int count_two = 0;

    for (int i = 0; i < n; ++i) {
        if (a[i] == 0) {
            ++count_zero;
        } else if (a[i] == 1) {
            ++count_one;
        } else {
            ++count_two;
        }
    }

    // Calculate the number of solutions
    int solutions = 0;
    if (count_zero == 0) {
        solutions = 1; // If no zero is present, there is only one solution
    } else if (count_one == 0 || count_two == 0) {
        solutions = 1; // If any of the other two counts is zero, there is only one solution
    } else {
        solutions = (count_zero * count_one * count_two) % MOD; // Calculate the number of solutions modulo MOD
    }

    cout << solutions << endl;

    return 0;
}
