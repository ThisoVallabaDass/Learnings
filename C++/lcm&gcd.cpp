#include <bits/stdc++.h>
using namespace std;

int gcdfuc(int n1, int n2) {
    vector<int> val1, val2, val3;

    // Find divisors of n1
    for (int i = 1; i <= n1; i++) {
        if (n1 % i == 0) {
            val1.push_back(i);
        }
    }

    // Find divisors of n2
    for (int i = 1; i <= n2; i++) {
        if (n2 % i == 0) {
            val2.push_back(i);
        }
    }

    // Find common divisors
    for (int i = 0; i < val1.size(); i++) {
        for (int j = 0; j < val2.size(); j++) {
            if (val1[i] == val2[j]) {
                val3.push_back(val1[i]);
            }
        }
    }

    // Return the largest common divisor
    return val3.back();
}

int lcm(int n1, int n2) {
    return (n1 * n2) / gcdfuc(n1, n2);  // LCM formula using built-in GCD
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    
    cout << "LCM: " << lcm(n1, n2) << endl;
    cout << "GCD: " << gcdfuc(n1, n2) << endl;
    
    return 0;
}
