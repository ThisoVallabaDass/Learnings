#include <bits/stdc++.h>
using namespace std;

void ftin(int i, int n) {
    if (i > n) {  // Stop recursion when `i` exceeds `n`.
        return;
    }
    cout << "thiso\n";  // Print "thiso" for each call.
    ftin(i + 1, n);  // Recursively call with `i+1`.
}

int main() {
    int n;
    cin >> n;  // Correct input syntax.
    ftin(1, n); // Start recursion from `1` to `n`.
    return 0;
}
