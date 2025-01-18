#include <iostream>
using namespace std;

void triangle(int n) {
    for (int i = 1; i <= n; i++) { // Loop through rows
        for (int j = 0; j < i; j++) { // Print the number `i` repeated `i` times
            cout << i << " ";
        }
        cout << endl;  // Move to the next line after each row
    }
}

int main() {
    int numTestCases;
    cout << "Enter the number of test cases: ";
    cin >> numTestCases;

    for (int t = 0; t < numTestCases; ++t) {
        cout << "Enter the value of n for test case " << t + 1 << ": ";
        int n;
        cin >> n;

        // Call triangle function for each test case
        cout << "Output for test case " << t + 1 << ":" << endl;
        triangle(n);
        cout << endl;
    }

    return 0;
}
