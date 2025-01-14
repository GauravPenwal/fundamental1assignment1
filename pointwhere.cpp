#include <iostream>
using namespace std;

int main() {
    // Declare variables to hold the coordinates of the point
    float x, y;

    // Input the coordinates of the point
    cout << "Enter the x-coordinate: ";
    cin >> x;

    cout << "Enter the y-coordinate: ";
    cin >> y;

    // Determine the location of the point
    if (x == 0 && y == 0) {
        cout << "The point lies at the origin (0, 0)." << endl;
    } else if (x == 0) {
        cout << "The point lies on the y-axis." << endl;
    } else if (y == 0) {
        cout << "The point lies on the x-axis." << endl;
    } else {
        cout << "The point lies neither on the x-axis, y-axis, nor at the origin." << endl;
    }

    return 0;
}
