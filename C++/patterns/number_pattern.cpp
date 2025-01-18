#include <iostream>
using namespace std;

void nTriangle(int n) {
    for (int i = 0; i <= n; i++) { // Loop through rows
        for (int j = 1; j <= i; j++) { // Print the number `i` repeated `i` times
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

        // Call nTriangle function for each test case
        cout << "Output for test case " << t + 1 << ":" << endl;
        nTriangle(n);
        cout << endl;
    }

    return 0;
}
