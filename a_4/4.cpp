#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int len = s.length();

    int i = 0;
    while(i < len)
    {
        if(!isspace(s[i]))  
        {
            int start = i;
            while(i < len && !isspace(s[i]))
                i++;
            int end = i - 1;
            while(start < end)
            {
                swap(s[start], s[end]);
                start++;
                end--;
            }
        }
        else 
            i++;
    }

    cout << s;
    return 0;
}
