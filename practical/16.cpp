#include <iostream>
using namespace std;

int main() {
    int A[2][2], B[2][2], Sum[2][2];

    cout << "Enter elements of first 2x2 matrix (A):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> A[i][j];
        }
    }
    cout << "\nEnter elements of second 2x2 matrix (B):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }
    cout << "\nResultant Matrix after Addition (A + B):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << Sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
