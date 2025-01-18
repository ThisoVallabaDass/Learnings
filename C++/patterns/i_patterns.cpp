#include <iostream>
using namespace std;

void nForest(int n) {
    for (int i = 0; i < n; i++) { // Loop for rows
        for (int j = 0; j <= i; j++) { // Loop for stars in each row
            cout << "* ";  // Print stars with space
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

        // Call nForest function for each test case
        cout << "Output for test case " << t + 1 << ":" << endl;
        nForest(n);
        cout << endl;
    }

    return 0;
}
