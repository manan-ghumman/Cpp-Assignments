#include <iostream>

using namespace std;

int main()
{
    int i , arr[20], max, min, sum = 0 ;

    cout<<"input 20 elements: "<<endl;
    for(i =0 ; i < 20 ; i++)
        cin>>arr[i];
    
        max = arr[0]; min = arr[0];
    for ( i = 0; i < 20; i++)
    {
        if( max < arr[i])
            max = arr[i];
        if (min > arr[i])
            min = arr[i];
        sum = sum + arr[i];
        
    }
    
    cout<<"largest number: "<<max<<endl;
    cout<<"Smallest number: "<<min<<endl;
    cout<<"sum : "<<sum<<endl; 
    return 0;
}