#include <iostream>
using namespace std;

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int n = 5, pos;

    cout << "Enter position to delete: ";
    cin >> pos;

    if (pos > n || pos <= 0) {
        cout << "Invalid position!" << endl;
    } else {
        for (int i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;

        cout << "Array after deletion: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    }
    return 0;
}

