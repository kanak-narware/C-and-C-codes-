#include <iostream>

int main() {
    double side1, side2, side3;
    std::cout << "Enter the lengths of the three sides: ";
    if (!(std::cin >> side1 >> side2 >> side3)) {
        std::cout << "Invalid numeric input." << std::endl;
        return 1;
    }
    if ((side1 + side2 <= side3) || (side1 + side3 <= side2) || (side2 + side3 <= side1)) {
        std::cout << "The given sides do not form a valid triangle." << std::endl;
    } 
    else if (side1 == side2 && side2 == side3) {
        std::cout << "The triangle is Equilateral." << std::endl;
    } 
    else if (side1 == side2 || side1 == side3 || side2 == side3) {
        std::cout << "The triangle is Isosceles." << std::endl;
    } 
    else {
        std::cout << "The triangle is Scalene." << std::endl;
    }

    return 0;
}
