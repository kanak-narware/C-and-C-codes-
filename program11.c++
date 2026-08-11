#include <iostream>
using namespace std;

int main() {
    double n1, n2, n3;
    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    // Check if n1 is the greatest
    if(n1 >= n2 && n1 >= n3) {
        cout << "Largest number: " << n1;
    }
    // Check if n2 is the greatest
    else if(n2 >= n1 && n2 >= n3) {
        cout << "Largest number: " << n2;
    }
    // If neither, then n3 must be the greatest
    else {
        cout << "Largest number: " << n3;
    }

    return 0;
}
