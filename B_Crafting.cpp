#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canCraftArtifact(vector<int>& a, vector<int>& b, int n) {
    long long totalSurplus = 0;
    long long totalDeficit = 0;

    for (int i = 0; i < n; ++i) {
        if (a[i] > b[i]) {
            totalSurplus += (a[i] - b[i]);
        } else {
            totalDeficit += (b[i] - a[i]);
        }
    }

    return totalSurplus >= totalDeficit;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        if (canCraftArtifact(a, b, n)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}