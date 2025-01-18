#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int low = 0;
        int high = s.size() - 1;
        while (low <= high) {
            swap(s[low], s[high]);
            low++;
            high--;
        }
    }
};

int main() {
    Solution solution;

    int numTestCases;
    cout << "Enter the number of test cases: ";
    cin >> numTestCases;
    cout<<endl;

    for (int t = 0; t < numTestCases; ++t) {
        cout << "Enter string for test case " << t + 1 << ": ";
        string input;
        cin >> input;
        cout<<endl;

        // Convert string to vector<char>
        vector<char> test(input.begin(), input.end());

        // Reverse the string
        solution.reverseString(test);

        // Display the result
        cout << "Reversed string for test case " << t + 1 << ": ";
        for (char c : test) {
            cout << c;
        }
        cout << endl;
    }

    return 0;
}
