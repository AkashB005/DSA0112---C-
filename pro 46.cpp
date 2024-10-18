#include <iostream>
using namespace std;
int main() {
    int rows1, cols1, rows2, cols2;
    cout << "Enter number of rows and columns for first matrix: ";
    cin >> rows1 >> cols1;
    cout << "Enter number of rows and columns for second matrix: ";
    cin >> rows2 >> cols2;
    if (cols1 != rows2) {
        cout << "Matrices cannot be multiplied (cols1 must equal rows2)." << endl;
        return 1;
    }
    int matrix1[rows1][cols1], matrix2[rows2][cols2], product[rows1][cols2];
    cout << "Enter elements of the first matrix:\n";
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter elements of the second matrix:\n";
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> matrix2[i][j];
        }
    }
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            product[i][j] = 0;
        }
    }
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    cout << "Product of the matrices:\n";
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
