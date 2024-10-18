#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 2, 4, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int value, count = 0;

    cout << "Enter value to find occurrences: ";
    cin >> value;

    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            count++;
        }
    }

    cout << "Number of occurrences of " << value << ": " << count << endl;
    return 0;
}

