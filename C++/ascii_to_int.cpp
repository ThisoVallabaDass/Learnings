#include <iostream>
using namespace std;

int main() {
    int asciiValue;
    cin >> asciiValue;

    char ch = static_cast<char>(asciiValue);

    cout << "The character for ASCII value " << asciiValue << " is " << ch << "." << endl;

   
    return 0;
}
