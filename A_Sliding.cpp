#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, m, r, c;
    cin >> n >> m >> r >> c;

    // Distance to four possible corner points:
    long long topLeft = (r - 1) + (c - 1);
    long long topRight = (r - 1) + (m - c);
    long long bottomLeft = (n - r) + (c - 1);
    long long bottomRight = (n - r) + (m - c);
    
    // Determine max possible largest distance shifts by total sum:
    long long result = max({topLeft, topRight, bottomLeft, bottomRight});
    
    cout << result << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
