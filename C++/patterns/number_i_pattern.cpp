#include <bits/stdc++.h>
using namespace std;

void triangle(int n) {
    for (int i = 1; i <= n; i++) { // Loop through rows
        for (int j = 0; j < i; j++) { //for column
            cout << i << " ";
        }
        cout << endl;  // Move to the next line after each row
    }
}

int main() {
   
        int n;
        cin >> n;
        cout << "Output:" << endl;
        triangle(n);// Call triangle function
        cout << endl;
    

    return 0;
}
