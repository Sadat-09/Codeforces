#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n; // Input the length of the encoded word
    std::string encodedString;
    std::cin >> encodedString; // Input the encoded string

    std::string decodedWord(n, ' '); // Initialize a string of the same length with spaces

    int left = 0; // Initialize the left pointer
    int right = n - 1; // Initialize the right pointer

    for (int i = 0; i < n; i++) {
        // Depending on whether the length is odd or even, fill characters from left or right
        if (i % 2 == 0) {
            decodedWord[left] = encodedString[i];
            left++;
        } else {
            decodedWord[right] = encodedString[i];
            right--;
        }
    }

    // Output the decoded word
    std::cout << decodedWord << std::endl;

    return 0;
}
