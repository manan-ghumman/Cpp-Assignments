#include<bits/stdc++.h>

using namespace std;

class Ademo{

        
    public:
    static int result;
    
    static void numcal(int num, char ch)
    {
        if( ch =='p')
        {
            result = pow(num, 2);
        }
        else
        {
            result = pow(num, 3);
        }
    }

    static void showval(int a, int b, char ch)
    {
        if(ch == 'a')
        {
            result = a+b;
        }
        else
        {
            result = (int)ch;
        }
    }

    static void equals(string s1, string s2)
    {
        if(s1 == s2)
        printf("eqaul");
        else
        printf("not equal");
    }

};

int Ademo::result;

int main()
{
    Ademo::numcal(10, 'p');
        cout<<Ademo::result<<endl;
    Ademo::numcal(10, 'a');
        cout<<Ademo::result<<endl;
    Ademo::showval(10, 20, 'a');
        cout<<Ademo::result<<endl;
    Ademo::showval(10, 20, 'A');
        cout<<Ademo::result<<endl;  
    Ademo::equals("hell0","hell0");
}