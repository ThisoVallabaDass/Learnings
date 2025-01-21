#include <bits/stdc++.h>
using namespace std;

bool numpallindrom(int i, int arr[], int n) {
    if (i >= n / 2) return true; // Base case: Reached the middle
    if (arr[i] != arr[n - i - 1]) return false; // Mismatch found
    return numpallindrom(i + 1, arr, n); // Recursive call
}

bool stringpallinndrome(int i, string str, int n) {
    if (i >= n / 2) return true; // Base case: Reached the middle
    if (str[i] != str[n - i - 1]) return false; // Mismatch found
    return stringpallinndrome(i + 1, str, n); // Recursive call
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    string str;
    cout << "Enter the string: ";
    cin >> str;

    // Display the array
    cout << "The Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Check array palindrome
    cout << "Is the array a palindrome? " << (numpallindrom(0, arr, n) ? "Yes" : "No") << endl;

    // Check string palindrome
    cout << "The String: " << str << endl;
    cout << "Is the string a palindrome? " << (stringpallinndrome(0, str, str.length()) ? "Yes" : "No") << endl;

    return 0;
}
