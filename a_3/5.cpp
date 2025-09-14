#include <iostream>

using namespace std;

int main()
{
    int p[6], q[4], r[10];
    int i, x = 5, y = 3, f =0;

    cout<<"input 6 ele:"<<endl;
    for(i =0 ; i< 6 ; i++)
        {
            cin>> p[i];
        }
    cout<<"input 4 ele:"<<endl;
    for(i =0 ; i< 4 ; i++)
        {
            cin>> q[i];
        }
    for(i = 0 ; i< 10; i++)
    {
        if (f==0)
        {
            r[i] = p[x--];
            
            f=1;
        }
        else
        {
            r[i] = q[y--];f=0;
        }
    }
    for(i = 0 ; i< 10; i++)
    {
        cout << r[i] << " ";
    }
    cout << endl;

    return 0;
}