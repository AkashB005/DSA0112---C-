#include <iostream>
#include <cmath>
using namespace std;

bool isNarcissistic(int num) {
    int temp = num, sum = 0, digits = 0;
    while (temp > 0) {
        temp /= 10;
        digits++;
    }
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    return sum == num;
}

int main() {
    int num = 153;
    if (isNarcissistic(num))
        cout << num << " is a Narcissistic Number" << endl;
    else
        cout << num << " is not a Narcissistic Number" << endl;
    return 0;
}

