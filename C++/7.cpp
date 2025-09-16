#include <bits/stdc++.h>

using namespace std;

void rmduplicate(string str)
{
    string sn = "";
    string::iterator it =str.begin(), end = str.end();
    stringstream ss(str);
    char ch;
    while(ss>>ch){
        if(sn.find(ch)==string::npos){
            sn.push_back(ch);
        }

    }
    cout<<"String after removing duplicates: "<<sn<<endl;

}

int main()
{
    string str;
    cout<<"input a string"<<endl;
    getline(cin, str);
    rmduplicate(str);

    return 0;
}