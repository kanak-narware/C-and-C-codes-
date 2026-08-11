#include <iostream>
using namespace std;

int main() {
    int number;

    // Prompt user for input
    cout << "Enter an integer: ";
    cin >> number;

    // Evaluate the number
    if (number > 0) {
        cout << number << " is a positive number." << endl;
    } 
    else if (number < 0) {
        cout << number << " is a negative number." << endl;
    } 
    else {
        cout << "The number is zero." << endl;
    }

    return 0;
}
