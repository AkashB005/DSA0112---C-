#include <iostream>
using namespace std;

bool isAbundant(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) sum += i;
    }
    return sum > num;
}

int main() {
    int num = 12;
    if (isAbundant(num))
        cout << num << " is an Abundant Number" << endl;
    else
        cout << num << " is not an Abundant Number" << endl;
    return 0;
}

