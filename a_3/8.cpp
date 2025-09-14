#include<iostream>

using namespace std;

int main()
{
    int m=4, n=4, arr[4][4];

    cout << "Enter the elements of the matrix (" << m << " x " << n << "):" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    for (int j = 0; j < n; j++)
    {
        int temp = arr[0][j];
        arr[0][j] = arr[2][j];
        arr[2][j] = temp;
    }

    cout << "Modified matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;

}
