#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool canFormAcronym(const string& acronym, const vector<string>& words) {
    if (acronym.empty()) {
        return true;
    }

    for (const string& word : words) {
        if (word[0] == acronym[0] && canFormAcronym(acronym.substr(1), words)) {
            return true;
        }
    }

    return false;
}

int main() {
    int N;
    cin >> N;

    vector<string> words(N);

    // Read words
    for (int i = 0; i < N; ++i) {
        cin >> words[i];
    }

    for (const string& word : words) {
        if (canFormAcronym(word, words)) {
            cout << "Y" << endl;
            return 0;
        }
    }

    cout << "N" << endl;

    return 0;
}
