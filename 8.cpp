#include <bits/stdc++.h>

using namespace std;

void ispalindrome(string str)
{
    bool flag = true;
    string::iterator s =str.begin(), e = str.end() -1;

    while(s<e)
    {
        if(*s != *e)
        {
            flag = false;
            break;
        }
        s++; e--;
    }
    if( flag)
        cout<<"yes its palindrome"<<endl;
    else   
        cout <<"not palindrome"<<endl;
    
}


int main()
{
    string word;
    cout<<"input a word"<<endl;
    cin>> word;
    ispalindrome(word);

    return 0;
}