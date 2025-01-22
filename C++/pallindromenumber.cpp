#include <iostream>
#include <vector>
using namespace std;


    bool isPalindrome(int x) {
        vector<int> val;

        if (x < 0) return false; // Negative numbers are not palindromes
        if (x == 0) return true; // 0 is a palindrome

        // Extract digits and store them in a vector
        while (x) {
            int y = x % 10;
            x = x / 10;
            val.push_back(y);
        }

        int low = 0;
        int high = val.size() - 1;

        // Check if the number is a palindrome
        while (low <= high) {
            if (val[low] != val[high]) {
                return false;
            }
            low++;
            high--;
        }
        return true;
    }


int main() {
    
        int input;
        cin >> input;

        // Check if the number is a palindrome
        bool result =isPalindrome(input);

        // Display the result
        cout << "Is the number " << input << " a palindrome? " << (result ? "Yes" : "No") << endl;
    

    return 0;
}
