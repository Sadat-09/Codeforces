#include<bits/stdc++.h>

using namespace std;


int countNonBeautifulSubarrays(vector<int>& arr) {
    int n = arr.size();
    int count = 0;

    for (int i = 0; i < n; i++) {
        set<int> distinctElements;
        for (int j = i; j < n; j++) {
            distinctElements.insert(arr[j]);
            if (distinctElements.size() > 1) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int T;
    cin >> T;

    for (int caseNum = 1; caseNum <= T; caseNum++) {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int result = countNonBeautifulSubarrays(A);
        cout << "Case " << caseNum << ": " << result << endl;
    }

    return 0;
}
