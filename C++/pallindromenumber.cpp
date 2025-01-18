#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> val;

        if (x < 0) return false; // Negative numbers are not palindromes
        if (x == 0) return true; // 0 is a palindrome

        // Extract digits and store them in a vector
        while (x) {
            int y = x % 10;
            x = x / 10;
            val.push_back(y);
        }

        int low = 0;
        int high = val.size() - 1;

        // Check if the number is a palindrome
        while (low <= high) {
            if (val[low] != val[high]) {
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
};

int main() {
    Solution solution;

    int numTestCases;
    cout << "Enter the number of test cases: ";
    cin >> numTestCases;

    for (int t = 0; t < numTestCases; ++t) {
        cout << "Enter number for test case " << t + 1 << ": ";
        int input;
        cin >> input;

        // Check if the number is a palindrome
        bool result = solution.isPalindrome(input);

        // Display the result
        cout << "Is the number " << input << " a palindrome? " << (result ? "Yes" : "No") << endl;
    }

    return 0;
}
