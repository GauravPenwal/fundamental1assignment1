#include <iostream>
#include <cctype>  // For isalpha(), isdigit(), etc.
using namespace std;
int main() {
    // Variable to store user input
    char inputChar;

    // Prompt user for input
    cout << "Enter a single character: ";
    cin >> inputChar;

    // Check if the input character is an alphabet
    if (isalpha(inputChar)) {
        cout << "The character '" << inputChar << "' is an alphabet." << std::endl;
    }
    // Check if the input character is a digit
    else if (isdigit(inputChar)) {
        cout << "The character '" << inputChar << "' is a digit." << std::endl;
    }
    // Otherwise, it is a special character
    else {
        cout << "The character '" << inputChar << "' is a special character." << std::endl;
    }

    return 0;
}
