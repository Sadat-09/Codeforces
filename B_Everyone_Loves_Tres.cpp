#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;


string findSmallestNumber(int n) {
    if (n == 1) return "-1";
    if (n == 2) return "66";
    
    string result(n, '3');
    result.back() = '6';
    
    if (isDivisibleBy33And66(result)) {
        return result;
    }
    
    return "-1";
}
bool isDivisibleBy33And66(const string& num) {
    int sum = 0;
    for (char c : num) {
        sum += (c - '0');
    }
    return sum % 3 == 0 && num.back() == '6';
}

string findSmallestNumber(int n) {
    if (n == 1) return "-1";
    if (n == 2) return "36";
    
    string result(n, '3');
    result.back() = '6';
    
    if (isDivisibleBy33And66(result)) {
        return result;
    }
    
    return "-1";
}

int main() {
    int t;
    cin >> t;
    vector<int> testCases(t);
    
    for (int i = 0; i < t; ++i) {
        cin >> testCases[i];
    }
    
    for (int n : testCases) {
        cout << findSmallestNumber(n) << endl;
    }
    
    return 0;
}