#include <bits/stdc++.h>
using namespace std;

int ftin(int n) { // Change return type to int
    if (n == 0) {
        return 0; // Base case
    } else {
        return n + ftin(n - 1); // Recursive call
    }
}

int main() {
    int n;
    cin >> n;
    cout << ftin(n); // Use the returned value
    return 0;
}
