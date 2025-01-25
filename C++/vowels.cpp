#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n; 

    for (int i = 0; i < n.size(); i++) {
        char ch = tolower(n[i]);  // Convert character to lowercase 
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            cout << n[i];  
        }
    }
    return 0;
}
