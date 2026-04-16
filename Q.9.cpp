#include <iostream>
using namespace std;
int main()
 {
    
    cout << "Uppercase Alphabets and their ASCII values:\n";
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        cout << ch << " = " << (int)ch << endl;
    }

    cout << "\nLowercase Alphabets and their ASCII values:\n";
    for (char ch = 'a'; ch <= 'z'; ch++) {
        cout << ch << " = " << (int)ch << endl;   
    }
    return 0;
}