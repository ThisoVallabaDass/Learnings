#include <iostream>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        while (num > 9) { // Continue until the number is a single digit
            num = num / 10 + num % 10; // Add the digits
        }
        return num;
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

        // Call addDigits function
        int result = solution.addDigits(input);

        // Display the result
        cout << "Result for test case " << t + 1 << ": " << result << endl;
    }

    return 0;
}
