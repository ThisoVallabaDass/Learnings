#include <bits/stdc++.h>
using namespace std;

int ftin(int n) {
    if (n == 0) {
        return 1; // Base case: factorial of 0 is 1
    } else {
        return n * ftin(n - 1); // Recursive case
    }
}

int main() {
    int n;
    cin >> n;
    cout << ftin(n) << endl; // Print the result
    return 0;
}
