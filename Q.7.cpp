#include <iostream>
using namespace std;
int main() 
{
    double time1, time2, time3;
    cout << "Enter time for Runner 1: ";
    cin >> time1;
    cout << "Enter time for Runner 2: ";
    cin >> time2;
    cout << "Enter time for Runner 3: ";
    cin >> time3;

    if (time1 < time2 && time1 < time3) {
        cout << "1st Place: Runner 1\n";
        if (time2 < time3) {
            cout << "2nd Place: Runner 2\n";
            cout << "3rd Place: Runner 3\n";
        } else {
            cout << "2nd Place: Runner 3\n";
            cout << "3rd Place: Runner 2\n";
        }
    } 
    else if (time2 < time1 && time2 < time3) {
        cout << "1st Place: Runner 2\n";
        if (time1 < time3) {
            cout << "2nd Place: Runner 1\n";
            cout << "3rd Place: Runner 3\n";
        } else {
            cout << "2nd Place: Runner 3\n";
            cout << "3rd Place: Runner 1\n";
        }
    } 
    else {
        cout << "1st Place: Runner 3\n";
        if (time1 < time2) {
            cout << "2nd Place: Runner 1\n";
            cout << "3rd Place: Runner 2\n";
        } else {
            cout << "2nd Place: Runner 2\n";
            cout << "3rd Place: Runner 1\n";
        }
    }

    return 0;
}