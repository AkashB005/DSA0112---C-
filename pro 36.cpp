#include <iostream>
using namespace std;

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int n = 5, pos, value;

    cout << "Enter position to insert: ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> value;

    if (pos > n || pos < 0) {
        cout << "Invalid position!" << endl;
    } else {
        for (int i = n; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = value;
        n++;

        cout << "Array after insertion: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    }
    return 0;
}

