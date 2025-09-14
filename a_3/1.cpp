#include<iostream>

using namespace std;

int main()
{
    int even[100], odd[100], arr[100];
    int i, n, e = 0, o =0;
    cout<<"input number of elements you want: "<<endl;
    cin>>n;
    cout<<"input elements in array: "<<endl;

    for(i =0 ; i< n ; i++)
    {
        cin>>arr[i];
        if(arr[i] % 2 == 0)
            even[e++] = arr[i];
        else
            odd[o++] = arr[i];
    }

    cout<<"even elements: "<<"[";
    for(i =0 ; i< e ; i++)
    {
        cout<<even[i]<<",";
    }
    cout<<"\b]"<<endl;
    cout<<"even elements: "<<"[";
    for(i =0 ; i< o ; i++)
    {
        cout<<odd[i]<<",";
    }
    cout<<"\b]"<<endl;
    return 0;
}