#include <iostream>
#include <string>
using namespace std;

int minFinalLength(string S) {
    int count = 0;
    for (int i = 0; i < S.length() - 1; ++i) {
        if (S[i] != S[i + 1]) {
            ++count;
            ++i; // Skip the next character as it will be deleted
        }
    }
    return S.length() - count;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        string S;
        cin >> N >> S;
        cout << minFinalLength(S) << endl;
    }
    return 0;
}