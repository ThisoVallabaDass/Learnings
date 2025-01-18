#include <bits/stdc++.h>
using namespace std;

void ftin(int i, int sum) {
    if (i < 1) {
        cout << sum;
        return;
    }
    ftin(i - 1, sum + i);  // Recursive call with updated parameters
}

int main() {
    int sum;
    cin >> sum;  // Input the value of sum (the upper limit)
    ftin(sum, 0);  // Call the function with sum as upper limit and 0 as initial sum
    return 0;
}
