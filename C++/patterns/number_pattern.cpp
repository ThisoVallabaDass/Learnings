#include <bits/stdc++.h>
using namespace std;

void nTriangle(int n) {
    for (int i = 0; i <= n; i++) { //for row
        for (int j = 1; j <= i; j++) { //    for column
            cout << i << " ";  //printing i=0,1,2,3
        }
        cout << endl;  // Move to the next line after each row
    }
}

int main() {
        int n;
        cin >> n;
        cout << "Output for test case " << t + 1 << ":" << endl;
        nTriangle(n); // Call nTriangle function 
        cout << endl;
    }

    return 0;
}
