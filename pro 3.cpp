#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    double average = (a + b + c) / 3.0;
    cout << "Average: " << average << endl;

    return 0;
}

