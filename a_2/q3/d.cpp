#include <iostream>

using namespace std;

int main()
{
    int i, n, j, k;
    cout<<"input n"<<endl;
    cin>>n;

    for (i = 1 ; i<= n ; i++)
    {
        k= i;
        for( j = 1 ; j <=n ; j++)
        {
            if (j==k)
            {
                cout<<k++<<" ";
            }
            else
                cout<<k<<" ";
           
            
        }
        cout<<"\n";
    }

    return 0;
}