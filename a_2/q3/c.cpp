#include <iostream>

using namespace std;

int main()
{
    int i, n, j,k=0;
    cout<<"input n"<<endl;
    cin>>n;
    //sum of N numbers
    for( i=1 ; i<= n ; i++)
    {
        k=k+i;
    }

    //pattern ka loop
    for (i = 0 ; i< n ; i++)
    {
        for(j = n ; j>i ; j--)
        {
            cout<<k--<<"  ";
        }
        cout<<"\n";
    }

    return 0;
}