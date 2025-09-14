    #include <iostream>

using namespace std;

int main()
{
    int i, n, j;
    char x;
    cout<<"input n"<<endl;
    cin>>n;

    for (i = 0 ; i< n ; i++)
    {
        //spaces
        for ( j = n; j > i; j--)
        {
            cout<<"  ";
        }
        //loop 1
        x='A';
        for(j=0 ; j<= i ; j++)
        {
            cout<<x++<<" ";
        }
        x = 'A'+ i -1 ;
        for(j = 0; j<i; j++ )
        {
            cout<<x--<<" ";
        }
        cout<<endl;


        
    }

    return 0;
}