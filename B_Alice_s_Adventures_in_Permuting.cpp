#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

bool canMeetQueen(int n, int targetX, int targetY, const string& moves) {
    
    set<pair<int, int>> visited;
    int x = 0, y = 0;
    
    
    int maxCycles = (2 * 20 + 1) * (2 * 20 + 1);
    
    for (int cycle = 0; cycle < maxCycles; cycle++) {
        for (char move : moves) {
            if (move == 'N') y++;
            else if (move == 'S') y--;
            else if (move == 'E') x++;
            else if (move == 'W') x--;
            
            
            if (x == targetX && y == targetY) return true;
        }
        
        
        if (!visited.insert({x, y}).second) break;
    }
    
    return false;
}

int main() {a
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        
        cout << (canMeetQueen(n, a, b, s) ? "YES" : "NO") << "\n";
    }
    
    return 0;
}