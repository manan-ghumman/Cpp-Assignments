#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string str, fstr;
    cout << "Enter a string: ";
    getline(cin, str);

    int len = str.length();

    for (int i = 0; i < len; i++) {
        if (isdigit(str[i])) {
            fstr.push_back(str[i]);
        }
    }
    for (int i = 0; i < len; i++) {
        if (isupper(str[i])) {
            fstr.push_back(str[i]);
        }
    }
    for (int i = 0; i < len; i++) {
        if (islower(str[i])) {
            fstr.push_back(str[i]);
        }
    }
    for (int i = 0; i < len; i++) {
        if (!isalpha(str[i]) && !isdigit(str[i])) {
            fstr.push_back(str[i]);
        }
    }

    cout << fstr;

    return 0;
}
