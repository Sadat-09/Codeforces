#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> stamps(n);
        for (int i = 0; i < n; ++i) {
            cin >> stamps[i].first >> stamps[i].second;
        }
        
        // We can sort the stamps based on width and height
        sort(stamps.begin(), stamps.end());
        
        // Initialize the total perimeter
        int totalPerimeter = 0;
        int currentHeight = 0, currentWidth = 0;
        
        // Calculate the perimeter of the minimum bounding rectangle
        for (const auto& stamp : stamps) {
            int w = stamp.first, h = stamp.second;
            currentWidth += w;
            currentHeight = max(currentHeight, h);
        }
        
        totalPerimeter = 2 * (currentWidth + currentHeight);
        cout << totalPerimeter << endl;
    }
    
    return 0;
}
