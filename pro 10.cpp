#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    a = a ^ b; // Step 1
    b = a ^ b; // Step 2
    a = a ^ b; // Step 3

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}

