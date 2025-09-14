#include<iostream>
#include<cctype>

using namespace std;

int main()
{
    double temp;
    char unit;

    cout<<"input f or c according to your conversion"<<endl;
    cin>>unit;
    unit = tolower(unit);

    cout<<"input your temp:  "<<endl;
    cin>>temp;

    switch (unit)
    {
    case 'f':
        temp = (5.0/9 * (temp - 32));
        cout<<"your temp in degree celcius: "<<temp ;
        break;
    
    case 'c':
        temp = (1.8 * (temp +32));
        cout<<"your temp in degree fahrenheite: "<<temp ;
        break;

    default:
        cout<<"input valid unit";
    }

    return 0;
}