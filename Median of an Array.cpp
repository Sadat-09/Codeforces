#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<long long> prefix_sum(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            prefix_sum[i + 1] = prefix_sum[i] + a[i];
            prefix_sum[i + 1] %= MOD;
        }

        long long max_sum = 0;
        for (int i = 0; i <= min(k, n); ++i) {
            long long current_sum = prefix_sum[i];
            int remaining_operations = k - i;
            if (remaining_operations > 0) {
                current_sum += (prefix_sum[n] - prefix_sum[n - remaining_operations]) % MOD;
                current_sum += MOD; // Adding MOD to handle negative results
                current_sum %= MOD;
            }
            max_sum = max(max_sum, current_sum);
        }

        cout << max_sum << endl;
    }
    return 0;
}
