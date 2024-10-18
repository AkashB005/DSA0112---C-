#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    cout << (n % 3 == 0 ? "Divisible by 3." : "Not divisible by 3.") << endl;

    return 0;
}

