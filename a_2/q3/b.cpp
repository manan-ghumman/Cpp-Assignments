#include <iostream>

using namespace std;

int main()
{
    int i, n, j,k=1;
    cout<<"input n"<<endl;
    cin>>n;

    for (i = 0 ; i< n ; i++)
    {
        for(j = n ; j>i ; j--)
        {
            cout<<k++<<"  ";
        }
        cout<<"\n";
    }

    return 0;
}