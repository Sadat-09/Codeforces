#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> rarity(n);

    for (int i = 0; i < n; i++) {
        cin >> rarity[i];
    }

    int start = -1;
    int end = -1;

    // Find the first occurrence where the cards are not in non-decreasing order
    for (int i = 0; i < n - 1; i++) {
        if (rarity[i] > rarity[i + 1]) {
            start = i;
            break;
        }
    }

    // If no such occurrence was found, the cards are already in non-decreasing order
    if (start == -1) {
        cout << "YES\n1 1\n";
        return 0;
    }

    // Find the last occurrence where the cards are not in non-decreasing order
    for (int i = n - 1; i > 0; i--) {
        if (rarity[i] < rarity[i - 1]) {
            end = i;
            break;
        }
    }

    // Try reversing the potential batch and check if the entire sequence becomes non-decreasing
    reverse(rarity.begin() + start, rarity.begin() + end + 1);

    // Check if the entire sequence is now non-decreasing
    bool sorted = true;
    for (int i = 0; i < n - 1; i++) {
        if (rarity[i] > rarity[i + 1]) {
            sorted = false;
            break;
        }
    }

    if (sorted) {
        cout << "YES\n" << start + 1 << " " << end + 1 << endl;
    } else {
        cout << "NO\n";
    }

    return 0;
}
