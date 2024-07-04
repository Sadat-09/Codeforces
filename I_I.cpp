#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int countTriples(int n, int m, vector<int>& a, vector<int>& b, vector<int>& c) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    long long ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            long long target = m / (1LL * a[i] * b[j]);
            int left = 0, right = n - 1;

            while (left <= right) {
                int mid = left + (right - left) / 2;

                if (c[mid] <= target) {
                    ans += (mid + 1);
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
        }
    }

    return ans;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(n), c(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    int result = countTriples(n, m, a, b, c);
    cout << result << endl;

    return 0;
}
