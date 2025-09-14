#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char ele[50];   
    int fq[50];     
    int len, i, j, k = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    len = str.length();

    for (i = 0; i < len; i++) {

        bool found = false;
        for (j = 0; j < k; j++) {
            if (ele[j] == str[i]) {
                fq[j]++;   
                found = true;
                break;
            }
        }
        if (!found) {
            ele[k] = str[i];  
            fq[k] = 1;        
            k++;
        }
    }

    cout << "\nCharacter frequencies:\n";
    for (i = 0; i < k; i++) {
        cout << ele[i] << " -> " << fq[i] << endl;
    }

    return 0;
}
