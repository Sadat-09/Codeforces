#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX_N = 2 * 1000000;

int n, x;
vector<long long> a(MAX_N);
int minSize = -1;

// Function to count the number of factors of x in a given number
int countFactors(long long num) {
   int count = 0;
   while (num % x == 0) {
       num /= x;
       count++;
   }
   return count;
}

int main() {
   // Fast input using cin.tie() and sync_with_stdio(false)
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);

   cin >> n >> x;
   for (int i = 0; i < n; i++) {
       cin >> a[i];
   }

   // Sort the array to prioritize smaller numbers
   sort(a.begin(), a.end());

   // Traverse the array, keeping track of the product and factor count
   long long product = 1;
   int factorCount = 0;
   for (int i = 0; i < n; i++) {
       product *= a[i];
       factorCount += countFactors(a[i]);

       // If the product is already divisible by x, update minSize and break
       if (product % x == 0) {
           minSize = i + 1;
           break;
       }

       // If the factor count exceeds the current size, no smaller subset is possible
       if (factorCount > i + 1) {
           break;
       }
   }

   cout << minSize << endl;

   return 0;
}