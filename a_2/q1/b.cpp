#include<iostream>

using namespace std;

int main()
{
    int i, a, n, sum=0;

    cout<<"input a , n"<<endl;
    cin>>a>>n;
    
    for(i=1 ; i<= n; i++)
    {
        sum += (a + i);
    }

    cout<<sum<<endl;

    return 0;
}
