#include<bits/stdc++.h>

using namespace std;


int main()
{
    string str = "reverse" ;
    string word;
    char ch;
    stringstream ss(str);

    string::iterator beg = str.begin();
    string::iterator end = str.end()-1;
    while(end>= beg){
        ch = *end;
        word.push_back(ch);
        end--;
    }

    cout<<word<<endl;

    return 0;
}