#include <iostream>
using namespace std;

int main() {
    int i, j, n = 5;
    char x = 'A';

    for (i = 0; i < n; i++, x++) {
        for (j = 0; j < n - i - 1; j++) {
            cout << "  ";
        }
        for (j = 0; j < 2 * i + 1; j++) {
            cout << x << " ";
        }
        cout << endl;
    }

    x = 'A';
    for (i = n - 2; i >= 0; i--, x++) {
        for (j = 0; j < n - i - 1; j++) {
            cout << "  ";
        }
        for (j = 0; j < 2 * i + 1; j++) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
