#include <bits/stdc++.h>
using namespace std;

bool perfect_number(int n) {
    if (n <= 1) return false; // only positive numbers

    vector<int> store;  
    for (int i = 1; i <= n / 2; i++) { // Loop till n/2
        if (n % i == 0) {
            store.push_back(i); // Store divisor
        }
    }

    int sum = 0;  
    for (int i = 0; i < store.size(); i++) {
        sum += store[i]; 
    }

    return sum == n; // Return true if sum equals n
}

int main() {
    int n;
    cin >> n;

    if (perfect_number(n)) {
        cout << "true";
    } else {
        cout << "false";
    }
}
