#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int sticks[n]; // Using an array instead of vector
        for (int i = 0; i < n; ++i) {
            cin >> sticks[i];
            sticks[i] *= 2; // Doubling the length of the sticks
        }

        for (int i = 0; i < n - 1; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (sticks[j] < sticks[i]) {
                    // Manually swap elements
                    int temp = sticks[i];
                    sticks[i] = sticks[j];
                    sticks[j] = temp;
                }
            }
        }

        int count = 0;
        for (int i = 0; i < n - 2; ++i) {
            for (int j = i + 1; j < n - 1; ++j) {
                int thirdSide = sticks[i] + sticks[j];
                // Manually search for valid third sides
                for (int k = j + 1; k < n; ++k) {
                    if (sticks[k] > thirdSide) {
                        break;
                    }
                    count++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}