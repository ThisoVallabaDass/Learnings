#include <iostream>
using namespace std;

void seeding(int n) {
    for (int i = 1; i <= n; i++) { // Loop through rows
        for (int j = 1; j <= n - i + 1; j++) { // Print stars in decreasing order
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

        // Call seeding function for each test case
        cout << "Output for test case " << t + 1 << ":" << endl;
        seeding(n);
        cout << endl;
    }

    return 0;
}
