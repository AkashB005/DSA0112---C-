#include <iostream>
using namespace std;

bool isNeon(int num) {
    int square = num * num;
    int sum = 0;
    while (square > 0) {
        sum += square % 10;
        square /= 10;
    }
    return sum == num;
}

int main() {
    int num = 9;
    if (isNeon(num))
        cout << num << " is a Neon Number" << endl;
    else
        cout << num << " is not a Neon Number" << endl;
    return 0;
}

