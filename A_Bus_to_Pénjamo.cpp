#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, r;
        cin >> n >> r;
        vector<int> families(n);
        for (int i = 0; i < n; ++i) {
            cin >> families[i];
        }

        // Sort families in descending order of size
        sort(families.rbegin(), families.rend());

        int happy_people = 0;
        int rows_used = 0;

        for (int i = 0; i < n; ++i) {
            if (families[i] == 1) {
                // If a family has only one member, they will be happy if they sit alone in a row
                happy_people++;
                rows_used++;
            } else {
                // If a family has more than one member, they will be happy if they sit together in a row
                happy_people += families[i];
                rows_used += (families[i] + 1) / 2;
            }
        }

        // If we have used more rows than available, we need to adjust the happy people count
        if (rows_used > r) {
            int excess_rows = rows_used - r;
            happy_people -= excess_rows;
        }

        cout << happy_people << endl;
    }

    return 0;
}