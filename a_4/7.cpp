#include<iostream>
#include<string>
#include<cctype>

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

            int a = start, b = end;
            bool flag = true;
            while(a < b)
            {
                if(s[a] != s[b])
                {
                    flag = false;
                    break;
                }
                a++; b--;
            }
            if(flag)
                cout << s.substr(start, end-start+1) << " ";
        }
        else
            i++;
    }
    return 0;
}
