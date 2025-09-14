#include <iostream>

using namespace std;

int power(int a, int n) {
    int i, num = 1;
    for (i = 1; i <= n; i++) {
        num = a * num;
    }
    return num;
}

int main() {
    int a, n, sum = 0, i;

    cout << "input a " << endl;
    cin >> a;
    cout << "input n" << endl;
    cin >> n;

    for (i = 1; i <= n; i++) {
        sum = sum + power(a, i);
    }

    cout << sum << endl;

    return 0;
}