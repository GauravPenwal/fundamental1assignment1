#include <iostream>
#include <cmath> // For abs() function
using namespace std;

int main() {
    // Declare variables to hold the coordinates of the three points
    float x1, y1, x2, y2, x3, y3;

    // Input the coordinates of the three points
    cout << "Enter the coordinates of point 1 (x1, y1): ";
    cin >> x1 >> y1;

    cout << "Enter the coordinates of point 2 (x2, y2): ";
    cin >> x2 >> y2;

    cout << "Enter the coordinates of point 3 (x3, y3): ";
    cin >> x3 >> y3;

    // Calculate the area of the triangle formed by the three points
    float area = 0.5 * abs(x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2));

    // Check if the area is zero
    if (area == 0) {
        cout << "The three points are collinear." << endl;
    } else {
        cout << "The three points are not collinear." << endl;
    }

    return 0;
}
