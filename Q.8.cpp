#include <iostream>
using namespace std;

int main() {
    int choice;
    double radius, length, width, base, height, area;

    cout << "Geometry Calculator\n";
    cout << "1. Calculate the Area of a Circle\n";
    cout << "2. Calculate the Area of a Rectangle\n";
    cout << "3. Calculate the Area of a Triangle\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter radius of the circle: ";
        cin >> radius;
        area = 3.14159 * radius * radius;
        cout << "Area of the circle is: " << area << endl;
    }
    else if (choice == 2) {
        cout << "Enter length of the rectangle: ";
        cin >> length;
        cout << "Enter width of the rectangle: ";
        cin >> width;
        area = length * width;
        cout << "Area of the rectangle is: " << area << endl;
    }
    else if (choice == 3) {
        cout << "Enter base of the triangle: ";
        cin >> base;
        cout << "Enter height of the triangle: ";
        cin >> height;
        area = 0.5 * base * height;
        cout << "Area of the triangle is: " << area << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}