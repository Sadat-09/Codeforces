#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Function to parse and update the string based on the value of X
string updateString(string str, int X) {
    for (char &c : str) {
        c = 'a' + (c - 'a' + X) % 26;
    }
    return str;
}

// Function to perform operations based on the queries
void performQueries(int Q) {
    vector<string> B;
    int X = 0;
    
    for (int i = 0; i < Q; ++i) {
        int type;
        cin >> type;
        
        if (type == 1) {
            string S;
            int f;
            cin >> S >> f;
            S = updateString(S, X);
            for (int j = 0; j < f; ++j) {
                B.push_back(S);
            }
            sort(B.begin(), B.end());
        } else if (type == 2) {
            string S;
            int f;
            cin >> S >> f;
            S = updateString(S, X);
            auto it = find(B.begin(), B.end(), S);
            int count = 0;
            while (it != B.end() && count < f) {
                B.erase(it);
                ++count;
                it = find(B.begin(), B.end(), S);
            }
        } else if (type == 3) {
            string S1, S2;
            cin >> S1 >> S2;
            S1 = updateString(S1, X);
            S2 = updateString(S2, X);
            int count = 0;
            for (const string& str : B) {
                if (str >= S1 && str <= S2) {
                    ++count;
                }
            }
            cout << count << endl;
        }
        
        // Update X
        X = (X + i + 1) % 26;
    }
}

int main() {
    int T;
    cin >> T;
    
    for (int i = 1; i <= T; ++i) {
        int Q;
        cin >> Q;
        cout << "Case " << i << ":" << endl;
        performQueries(Q);
    }
    
    return 0;
}
