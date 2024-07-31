#include <iostream>
using namespace std;

int main() {
    // Declare variables to hold the marks for students A, B, and C
    float marksA, marksB, marksC;

    // Input the marks for students A, B, and C
    cout << "Enter the marks for student A: ";
    cin >> marksA;

    cout << "Enter the marks for student B: ";
    cin >> marksB;

    cout << "Enter the marks for student C: ";
    cin >> marksC;

    // Determine which student has the least marks
    if (marksA < marksB && marksA < marksC) {
        cout << "Student A has the least marks." << endl;
    } else if (marksB < marksA && marksB < marksC) {
        cout << "Student B has the least marks." << endl;
    } else if (marksC < marksA && marksC < marksB) {
        cout << "Student C has the least marks." << endl;
    } else {
        cout << "There is a tie for the least marks." << endl;
    }

    return 0;
}
