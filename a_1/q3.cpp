#include<iostream>
#include<cctype>

using namespace std;

int main()
{
    char x;
    int alphabet;

    cout<<"Input character you wanna check: "<<endl;
    cin>>x;

    x = tolower(x);
    cout<<x;

    alphabet = isalpha(x);
    switch(alphabet)
    {
        case 0:
            cout<<"input alphabet";
            break;
        default: 
            switch (x)
            {
            case 'a':
                cout<<"vowel";
                break;
            case 'e':
                cout<<"vowel";
                break;
            case 'i':
                cout<<"vowel";
                break; 
            case 'o':
                cout<<"vowel";
                break;
            case 'u':
                cout<<"vowel";
                break;

            default:
                cout<<"consonant";
                break;
            }

    }

    


    return 0;
}