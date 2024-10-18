#include <iostream>
using namespace std;

bool isBuzz(int num) {
    return (num % 7 == 0 || num % 10 == 7);
}

int main() {
    int num = 49;
    if (isBuzz(num))
        cout << num << " is a Buzz Number" << endl;
    else
        cout << num << " is not a Buzz Number" << endl;
    return 0;
}

