#include <iostream>
using namespace std;
int main() 
{
    double numerator, denominator;

    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;
    if (denominator != 0) {
        double result = numerator / denominator;
        cout << "Division result is: " << result << endl;
    } else {
        cout << "Division by zero is not possible." << endl;
    }

    return 0;
}