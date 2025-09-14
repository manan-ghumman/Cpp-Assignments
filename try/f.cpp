#include<bits/stdc++.h>


using namespace std;

int main()
{
    string str;
    getline(cin, str);
    string word;
        stringstream ss(str);
    
    while(ss >> word)
    {
        cout << word<<endl;
    }

    return 0;
}
