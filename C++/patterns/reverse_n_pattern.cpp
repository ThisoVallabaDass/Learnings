#include <bits/stdc++.h>
using namespace std;

void seeding(int n) {
    for (int i = 1; i <= n; i++) { 
        for (int j = 1; j <= n - i + 1; j++) { // Print stars in decreasing order
            cout << "* ";  
        }
        cout << endl;  // Move to the next line after each row
    }
}

int main() {
        int n;
        cin >> n;
        cout << "Output for test case " << t + 1 << ":" << endl;
        seeding(n); // Call seeding function
        cout << endl;
    

    return 0;
}
