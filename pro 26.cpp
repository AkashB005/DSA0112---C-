#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

bool isStrong(int num) {
    int sum = 0, temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    return sum == num;
}

int main() {
    int num = 145;
    if (isStrong(num))
        cout << num << " is a Strong Number" << endl;
    else
        cout << num << " is not a Strong Number" << endl;
    return 0;
}

