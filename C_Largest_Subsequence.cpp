#include <iostream>
#include <algorithm>
#include <vector>

const int MAXN = 2e5 + 5;

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    int n;
    std::string s;
    std::cin >> n >> s;

    // Build the suffix array and LCP array
    std::vector<int> sa(n), lcp(n);
    build_suffix_array(s, sa, lcp);

    // Count the number of occurrences of each character
    std::vector<int> char_count(26, 0);
    for (char c : s) {
      char_count[c - 'a']++;
    }

    // Initialize minimum operations and current subsequence length
    int min_ops = n, cur_len = 0;

    // Iterate through the suffix array
    for (int i = 0; i < n; ++i) {
      // Update current subsequence length based on LCP
      if (i > 0) {
        cur_len = std::min(cur_len, lcp[i]);
      }

      // Check if shifting the current subsequence is optimal
      int shift_right = cur_len;
      for (char c = s[sa[i]]; shift_right > 0; --shift_right) {
        char_count[c - 'a']--;
        if (char_count[c - 'a'] == 0) {  // All characters present in subsequence
          min_ops = std::min(min_ops, i - shift_right);
          break;
        }
      }
      char_count[s[sa[i]]]++;  // Reset character count for next iteration
    }

    // Print the minimum number of operations
    if (min_ops == n) {
      std::cout << -1 << std::endl;
    } else {
      std::cout << min_ops << std::endl;
    }
  }

  return 0;
}

// Function to build the suffix array and LCP array (requires additional implementation)
void build_suffix_array(const std::string& s, std::vector<int>& sa, std::vector<int>& lcp) {
  // ... Implementation of suffix array construction and LCP calculation ...
}