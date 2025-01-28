#include <iostream>
#include <string>
using namespace std;

string calculate_washing_time(int weight) {
    if (weight == 0) {
        return "0 minutes";
    } else if (weight > 0 && weight <= 2000) {
        return to_string(25) + " minutes";
    } else if (weight >= 2001 && weight <= 4000) {
        return to_string(35) + " minutes";
    } else if (weight >= 4001 && weight <= 7000) {
        return to_string(45) + " minutes";
    } else {
        return "Invalid weight";
    }
}

int main() {
    int weight;
    cout << "Enter weight of clothes: ";
    cin >> weight;
    cout << calculate_washing_time(weight) << std::endl;
    return 0;
}