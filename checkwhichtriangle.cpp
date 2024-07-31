#include <iostream>

int main() {
    // Variables to store the lengths of the sides
    double side1, side2, side3;

    // Prompt user for input
    std::cout << "Enter the length of the first side: ";
    std::cin >> side1;
    std::cout << "Enter the length of the second side: ";
    std::cin >> side2;
    std::cout << "Enter the length of the third side: ";
    std::cin >> side3;

    // Check if the input values form a valid triangle
    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        std::cout << "Sides of a triangle must be positive numbers." << std::endl;
        return 1; // Exit the program with an error code
    }

    // Check for the triangle inequality theorem
    if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
        std::cout << "The provided sides do not form a valid triangle." << std::endl;
        return 1; // Exit the program with an error code
    }

    // Determine the type of triangle
    if (side1 == side2 && side2 == side3) {
        std::cout << "The triangle is equilateral." << std::endl;
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        std::cout << "The triangle is isosceles." << std::endl;
    } else {
        std::cout << "The triangle is scalene." << std::endl;
    }

    return 0;
}
