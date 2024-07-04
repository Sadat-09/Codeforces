#include <bits/stdc++.h>
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef long long int ll;
typedef long double LD;
using namespace std;

bool check_prime(int n) {
    bool is_prime = true;

    if (n == 0 || n == 1) {
        is_prime = false;
    }

    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }

    return is_prime;
}

int main() {
    IO;
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;
        int arr[n];
        int pref[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr, arr + n, greater<int>());
        pref[0] = arr[0];

        for (int i = 1; i < n; i++) {
            pref[i] = pref[i - 1] + arr[i];
        }

        for (int i = 0; i < q; i++) {
            ll x;
            cin >> x;
            if (x > pref[n - 1]) {
                cout << "-1" << endl;
            } else {
               
                int low = 0, high = n - 1;
                while (low < high) {
                    int mid = (low + high) / 2;
                    if (pref[mid] >= x) {
                        high = mid;
                    } else {
                        low = mid + 1;
                    }
                }
                cout << low + 1 << endl;
            }
        }  
    }

    return 0;
}
