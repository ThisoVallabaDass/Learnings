#include <iostream>
using namespace std;

 

    int addDigits(int num) {
        while (num > 9) { // Continue until the number is a single digit which is greater than 9
            num = num / 10 + num % 10; // num/10 removes the last number && num%10 adds the last nnumber
        }
        return num;
    }


int main() {
   

    
        int input;
        cin >> input;

        
        int result = addDigits(input);// Call addDigits function

        
        cout << "Result  " << result << endl;
    }

    return 0;
}
