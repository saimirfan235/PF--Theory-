#include <iostream>
using namespace std;
int main()
 {
    int a = 2, b = 4, c = 6;

    cout << "A) " << ((a == 4 || b > 2) ? "True" : "False") << endl;
    cout << "B) " << ((6 <= c && a < 3) ? "True" : "False") << endl;
    cout << "C) " << ((1 != b && c != 3) ? "True" : "False") << endl;
    cout << "D) " << ((a >= -1 || a <= b) ? "True" : "False") << endl;
    cout << "E) " << (!(a > 2) ? "True" : "False") << endl;

    return 0;
}