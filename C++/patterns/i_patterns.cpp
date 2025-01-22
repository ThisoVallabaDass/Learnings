#include <iostream>
using namespace std;

void nForest(int n) {
    for (int i = 0; i < n; i++) { // Loop for rows
        for (int j = 0; j <= i; j++) { // Loop for column with i times
            cout << "* ";  // 
        }
        cout << endl;  // Move to the next line after each row
    }
}

int main() {
    
        int n;
        cin >> n;

       
        cout << "Output  " << t + 1 << ":" << endl;
        nForest(n); // Call nForest function 
        cout << endl;
    

    return 0;
}
