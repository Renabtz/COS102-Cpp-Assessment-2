// File 1: question1.cpp
// Check whether a triangle is right-angled using two given interior angles.

#include <iostream>
using namespace std;

int main() {
    double angle1, angle2, angle3;

    cout << "90 ";
    cin >> angle1;

    cout << "45 ";
    cin >> angle2;

    // Validate the two angles and ensure the third angle is positive.
    if (angle1 <= 0 || angle2 <= 0 || angle1 + angle2 >= 180) {
        cout << "Invalid angles. The angles of a triangle must be positive "
             << "and their total must be less than 180 degrees." << endl;
        return 0;
    }

    // The sum of the interior angles of a triangle is 180 degrees.
    angle3 = 180 - (angle1 + angle2);

    cout << "The third angle is: " << angle3 << " degrees" << endl;

    if (angle1 == 90 || angle2 == 90 || angle3 == 90) {
        cout << "The triangle is a right-angled triangle." << endl;
    } else {
        cout << "The triangle is not a right-angled triangle." << endl;
    }

    return 0;
}
