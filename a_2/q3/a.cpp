#include <iostream>

using namespace std;

int main()
{
    int i, n, j;
    cout<<"input n"<<endl;
    cin>>n;

    for (i = 0 ; i< n ; i++)
    {
        for( j = 1+i*2 ; j >=1 ; j -= 2)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }

    return 0;
}