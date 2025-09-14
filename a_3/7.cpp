#include <iostream>
using namespace std;

int main() {
    int m, n, arr[100][100];

    cout << "Enter number of rows : ";
    cin >> m;
    cout << "Enter number of columns : ";
    cin >> n;

    
    cout << "Enter the elements of the matrix (" << m << " x " << n << "):" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "\nMirror Image Matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = n - 1; j >= 0; j--) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
