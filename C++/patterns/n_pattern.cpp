#include <iostream>
using namespace std;

void nForest(int n) {
    for (int i = 1; i <= n; i++) { // Loop for each row
        for (int j = 0; j < n; j++) { // Loop for stars in each row
            cout << "*" << " ";
        }
        cout << endl;
    }
}

int main() {
        int n;
        cin >> n;

        
        cout << "Output :" << endl;
        nForest(n);// Call nForest function 
        cout << endl;
    

    return 0;
}
