#include <iostream>
using namespace std;
int main(){
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[n1 + n2];
    for (int i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        arr3[n1 + i] = arr2[i];
    }
    cout << "Merged array: ";
    for (int i = 0; i < n1 + n2; i++) {
        cout << arr3[i] << " ";
    }
    return 0;
}