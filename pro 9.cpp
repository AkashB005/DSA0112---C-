#include <iostream>
#include <cmath> // For floor and ceil
using namespace std;

int main() {
    double num;
    cout << "Enter a floating-point number: ";
    cin >> num;

    cout << "Floor: " << floor(num) << endl;
    cout << "Ceil: " << ceil(num) << endl;

    return 0;
}

