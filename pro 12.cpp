#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << (a == b ? "The numbers are equal." : "The numbers are not equal.") << endl;

    return 0;
}

