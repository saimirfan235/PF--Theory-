#include <iostream>
using namespace std;
int main() 
{
    int model;

    cout << "Available TV Models: 100, 200, 300\n";
    cout << "Enter the model you want to purchase: ";
    cin >> model;

    if (model == 300) {
        cout << "Features of Model 300:\n";
        cout << "- Picture-in-a-picture\n";
        cout << "- Stereo sound\n";
        cout << "- Remote control\n";
    }
    else if (model == 200) {
        cout << "Features of Model 200:\n";
        cout << "- Stereo sound\n";
        cout << "- Remote control\n";
    }
    else if (model == 100) {
        cout << "Features of Model 100:\n";
        cout << "- Remote control only\n";
    }
    else {
        cout << "Invalid model selected.\n";
    }

    return 0;
}