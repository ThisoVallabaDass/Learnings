#include <bits/stdc++.h>
using namespace std;

void add_sub(int a, int b) {
    // Handle addition
    int add= a + (b);
    if (add < 0) {
        add = -add;  // Convert to positive if result is negative
    }

    // Handle subtraction
    if (a < b) {
        swap(a, b); // Ensure larger value is subtracted from smaller value
    }
    int sub = a - b;
    if (sub < 0) {
        sub = sub*(-1);  // Convert to positive if result is negative by multiplying it with -1
    }

    // Display results
    cout << "Addition of " << a << " and " << b << " is: " << add<< endl;
    cout << "Subtraction of " << a << " and " << b << " is: " << sub << endl;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Call the function
    add_sub(a, b);

    return 0;
}
