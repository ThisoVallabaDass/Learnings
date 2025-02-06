#include <bits/stdc++.h>
using namespace std;

int gcd(int n1, int n2) {
    int m = max(n1, n2);
    int mi = min(n1, n2);
    
    if (mi == 0) return m;  // Corrected comparison
    
    return gcd(mi, m % mi);  // Corrected recursion using modulus
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    
    cout << "GCD: " << gcd(n1, n2) << endl;  // Fixed function call and output

    return 0;
}
