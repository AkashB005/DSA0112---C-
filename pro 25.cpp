#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n, original, sum, digit;
    cout << "Enter a number: ";
    cin >> n;

    unordered_set<int> seen;

    while (n != 1 && seen.find(n) == seen.end()) {
        seen.insert(n);
        sum = 0;

        while (n > 0) {
            digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        n = sum;
    }

    if (n == 1)
        cout << "It's a Happy number." << endl;
    else
        cout << "It's not a Happy number." << endl;

    return 0;
}

