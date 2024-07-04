#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> coins(n);

    for(int i = 0; i < n; ++i) {
        cin >> coins[i].first >> coins[i].second;
    }

    for(const auto& coin : coins) {
        int x = coin.first;
        int y = coin.second;

        if (abs(x) <= y) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
