#include<iostream>
#include <string>
#include <cctype>

using namespace std;

bool isvowel(char c) {
    c = tolower(c);
    if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'))
    {
        return true;
    }
    return false;
    
    
}

int main() {
    int len, u= 0 , l=0, v=0, d=0;
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    len = str.length();
    for (int i = 0; i < len; i++) {
        if (isupper(str[i])) 
            u++;
        else if (islower(str[i])) 
            l++;
        else if (isdigit(str[i])) 
            d++;
        if (isvowel(str.at(i)))
            v++;
    }

    cout << "Uppercase letters: " << u << endl;
    cout << "Lowercase letters: " << l << endl;
    cout << "Vowels: " << v << endl;
    cout << "Digits: " << d << endl;

    return 0;
}