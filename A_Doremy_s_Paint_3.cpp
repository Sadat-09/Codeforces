#include <bits/stdc++.h>
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef long long int ll;
typedef long double LD;
#define w(t)     \
    int t;       \
    cin >> t;    \
    while (t--)  \
    {            \
        solve(); \
    }
using namespace std;

bool check_prime(int n) {
  bool is_prime = true;

  // 0 and 1 are not prime numbers
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

void solve() {
    int n;
    cin >> n;
    int arr[n];
    int count1 = 0;
    int count2 = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    set<int> s;
    for (int i = 0; i < n; i++) {
        s.insert(arr[i]);
    }

    if (s.size() > 2) {
        cout << "NO" << endl;
        return;


    } 
    if(n==2){
      cout<<"YES"<<endl;
          return; 
    }
    
    
    else {
         set<int>::iterator it = s.begin();
        int first_element = *it;
        it++;
        int second_element = *it;

        for (int i = 0; i < n; i++) {
            if (arr[i] == first_element) {
                count1++;
            } else {
                count2++;
            }
        }

       
        if ( abs(count1 - count2) == 1||abs(count1 - count2) == 0||count1==0||count2==0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    }


int main() {
    IO;
    w(t);
    return 0;
}
