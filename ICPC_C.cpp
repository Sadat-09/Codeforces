#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int case_num = 1; case_num <= t; ++case_num) {
        int n, d;
        cin >> n >> d;
        vector<pair<int, int>> flowerbeds(n);
        for (int i = 0; i < n; ++i) {
            cin >> flowerbeds[i].first >> flowerbeds[i].second;
        }

        int total_watering = 0;
        for (const auto& bed : flowerbeds) {
            int min_days = bed.first;
            int max_days = bed.second;
            int waterings = (d + max_days - 1) / max_days;
            total_watering += waterings;
        }

        cout << "Case " << case_num << ": " << total_watering << endl;
    }
    return 0;
}