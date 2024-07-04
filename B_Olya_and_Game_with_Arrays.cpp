#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> arrays(n);

        // Read input arrays
        for (int i = 0; i < n; ++i) {
            int m;
            cin >> m;
            arrays[i].resize(m);
            for (int j = 0; j < m; ++j) {
                cin >> arrays[i][j];
            }
        }

        // Find the minimum value in each array and sum them up
        long long beauty = 0;
        for (int i = 0; i < n; ++i) {
            beauty += *min_element(arrays[i].begin(), arrays[i].end());
        }

        cout << beauty << "\n";
    }

    return 0;
}
