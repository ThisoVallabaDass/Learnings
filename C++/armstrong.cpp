#include <bits/stdc++.h>
using namespace std;

void armstrong_number(int n) {
    int original = n; // Store original number
    int sum = 0;
    int rem;
    
    while (n > 0) { // Fix the while condition
        rem = n % 10;
        sum += pow(rem, 3);
        n /= 10;
    }
    
 
    if (sum == original) {
        cout << "Armstrong Number" << endl;
    } else {
        cout << "Not an Armstrong Number" << endl;
    }
}

int main() {
    int test;
    cin >> test;
    
    for (int i = 0; i < test; i++) {
        int n;
        cin >> n;
        armstrong_number(n);
    }

    return 0;
}
