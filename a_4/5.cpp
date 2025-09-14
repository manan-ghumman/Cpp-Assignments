#include<iostream>
#include<string>
#include<cctype>
using namespace std;

bool isvowel(char c)
{
    c = tolower(c);
    return (c=='a'||c=='e'   ||c=='i' ||c=='o' ||c=='u');
}

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

            if(isvowel(s[start]) && isvowel(s[end]))
                cout << s.substr(start, end-start+1) << " ";
        }
        else
            i++;
    }
    return 0;
}
