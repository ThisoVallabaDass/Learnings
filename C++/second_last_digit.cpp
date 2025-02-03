#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr;
    while (n) {
        arr.push_back(n % 10); 
        n /= 10;
    }

    if (arr.size() >= 2) {
        cout << arr[1]; 
    } else {
        cout << "invalid";
    }

    return 0;
}
 