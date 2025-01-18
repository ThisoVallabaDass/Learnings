#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;
        while (i >= 0 && s[i] == ' ') i--; // Skip trailing spaces
        int count = 0;
        while (i >= 0 && s[i] != ' ') { // Count the last word's length
            count++;
            i--;
        }
        return count;
    }
};

int main() {
    Solution solution;

    int numTestCases;
    cout << "Enter the number of test cases: ";
    cin >> numTestCases;
    cin.ignore(); // Clear the newline character left by cin

    for (int t = 0; t < numTestCases; ++t) {
        cout << "Enter string for test case " << t + 1 << ": ";
        string input;
        getline(cin, input); // Read the input string including spaces

        // Get the length of the last word
        int result = solution.lengthOfLastWord(input);

        // Display the result
        cout << "Length of the last word for test case " << t + 1 << ": " << result << endl;
    }

    return 0;
}
