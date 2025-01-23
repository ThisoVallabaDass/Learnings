#include <bits/stdc++.h>
using namespace std;

int ftin(int n) {
    if (n == 0) { //initial numbers in fibonacci series are 0 1
        return 0; 
    } else if (n == 1) { 
        return 1; 
    } else {
        return ftin(n - 1) + ftin(n - 2); //recursive call with reducing n by 1 && 2
    }
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++) {
        cout << ftin(i) << " ";
    }
    cout << endl;

    return 0;
}