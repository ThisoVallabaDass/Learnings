#include <bits/stdc++.h>
using namespace std;

void ftin(int arr[], int i, int r) {
    if (i >= r) {
        return; // Base case: stop when indices meet or cross
    }
    swap(arr[i], arr[r]); // Swap elements at positions i and r
    ftin(arr, i + 1, r - 1); // Recursive call to reverse the rest
}

int main() {
    int n;
    cin >> n; // Read the number of elements
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Read the array elements
    }

    ftin(arr, 0, n - 1); // Reverse the array

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Print the reversed array
    }
    return 0;
}
