#include <iostream>

int main() {
    int number;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Check if the number is even or odd
    if (number % 2 == 0) {
        std::cout << number << " is even." << std::endl;
    } else {
        std::cout << number << " is odd." << std::endl;
    }
    std::cout << "Counting down from 3:" << std::endl;
    for (int i = 3; i > 0; --i) {
        std::cout << i << "... ";
    }
    std::cout << "Liftoff!" << std::endl;

    return 0;
}
