#include <iostream>
#include <vector>

using namespace std;

bool hasEqualSumSubarray(const vector<int>& a) {
    int n = a.size();
    vector<long long> prefixSum(n + 1, 0);

    for (int i = 0; i < n; i++) {
        prefixSum[i + 1] = prefixSum[i] + (i % 2 == 0 ? a[i] : 0);
    }

    long long oddSum = 0, evenSum = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            oddSum += a[i];
        } else {
            evenSum += a[i];
        }
    }

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0 && prefixSum[i / 2] == evenSum - prefixSum[i]) {
            return true;
        }
        if (i % 2 == 1 && prefixSum[i / 2] + a[i - 1] == oddSum - prefixSum[i]) {
            return true;
        }
    }

    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (hasEqualSumSubarray(a)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
