#include<iostream>

using namespace std;

int main()
{
    int i, j,  arr[15];

    cout<<"input elements in array in unsorted way: "<<endl;
    for(i =0; i< 15 ; i++)
    cin>>arr[i];

    for(i =0; i< 14 ; i++)
    {
        for(j = 0 ; j < 14 - i ; j++ )
        {
            if (arr[j] > arr[j+1])
            {
                arr[j] ^= arr[j+1];
                arr[j+1] ^= arr[j];
                arr[j] ^= arr[j+1];
                // int temp = arr[j+1];
                // arr[j+1] = arr[j];
                // arr[j] = temp;
            }
            
        }
    }
    cout<<"Sorted elements: "<<"[";
        for(i =0 ; i< 15 ; i++)
        {
            cout<<arr[i]<<",";
        }
        cout<<"\b]"<<endl;

    return 0;
}