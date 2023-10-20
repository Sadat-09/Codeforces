#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    while (m--)
    {
        
    
     
        int x;
        cin >> x;

        int left = 0;
        int right = n - 1;
        int found = -1;

        while (left <= right) {
            int mid = (left + right) / 2;

            if (arr[mid] == x) {
                found = mid;
                break;
            } else if (arr[mid] < x) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        cout << found <<"\n";
    }

    return 0;
}
