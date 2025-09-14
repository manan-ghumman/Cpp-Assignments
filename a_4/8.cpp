#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str;
    int i;

    cin >> str;
    for(i = 0 ; i < str.length() ; i++)
    {
        if(isupper(str[i]))
            str[i] = tolower(str[i]);
        else if(islower(str[i]))
            str[i] = toupper(str[i]);
    }
    cout << str;
    return 0;
}
