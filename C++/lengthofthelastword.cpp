#include <iostream>
#include <string>
using namespace std;


    int lengthOfLastWord(string s) {
        int i = s.size() - 1;
        while (i >= 0 && s[i] == ' ') i--; // Skip trailing spaces
        int count = 0;
        while (i >= 0 && s[i] != ' ') { // Count the last word's length
            count++;
            i--;
        }
        return count;
    }

int main() {
    

    
        string input;
        getline(cin, input); // Read the input string including spaces

        // Get the length of the last word
        int result = lengthOfLastWord(input);

        // Display the result
        cout << "Length of the last word  " << result << endl;
    }

    return 0;
}
