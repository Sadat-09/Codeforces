#include <iostream>
using namespace std;

int main() {
    int T; // number of test cases
    cin >> T;

    while (T--) {
        int D, X, Y; // discount per session, membership cost, budget
        cin >> D >> X >> Y;

        // If Chef's budget is already greater than or equal to X, no sessions are needed
        if (Y >= X) {
            cout << 0 << endl;
            continue;
        }

        // Try increasing the number of sessions until we find the first valid one
        bool possible = false;
        for (int n = 1; n <= 100; ++n) {
            // Calculate the discounted price after 'n' trial sessions
            double discount = X * (1 - n * (D / 100.0));
            if (discount <= Y) {
                cout << n << endl;
                possible = true;
                break;
            }
        }

        // If no number of sessions could make the membership affordable, output -1
        if (!possible) {
            cout << -1 << endl;
        }
    }

    return 0;
}
