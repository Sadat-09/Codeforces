#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases
    
    while (t--) {
        int x, y, n;
        cin >> x >> y >> n;  // Target coordinates (x, y) and jump limit n
        
        int current_x = 0, current_y = 0;
        int move_distance = 1;  // Distance for each move
        int moves = 0;  // Number of moves made
        
        while (true) {
            if (moves % 2 == 0) {
                // Move along the X-axis
                current_x += move_distance;
            } else {
                // Move along the Y-axis
                current_y += move_distance;
            }

            moves++;
            move_distance++;

            // Check if we've reached or exceeded the target coordinates
            if (current_x >= x && current_y >= y) {
                cout << moves << endl;
                break;
            }
        }
    }

    return 0;
}
