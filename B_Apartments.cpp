#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n);  
    vector<int> b(m);  

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

  
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int cnt = 0;
    int i = 0, j = 0; 

    while (i < n && j < m) {
        
        if (b[j] < a[i] - k) {
            j++;
        }

        else if (b[j] > a[i] + k) {
            i++;
        }
     
        else {
            cnt++;
            i++;
            j++;
        }
    }

    cout << cnt << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
