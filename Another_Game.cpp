#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T; 
    
    while (T--) {
        int N;
        cin >> N; 
        vector<int> P(N); 
        
        for (int i = 0; i < N; i++) {
            cin >> P[i];
        }
        
       
        int minK = 0;
        for (int i = 0; i < N - 1; i++) {
            minK = max(minK, P[i] + P[i + 1]);
        }
        
        
        cout << minK << endl;
    }
    
    return 0;
}
