#include<iostream>

using namespace std;

int buzz(int num){
    if(num % 7 ==0)
        return 1;
    if((num % 10) == 7)
        return 1;    

    return 0;
}

int perfect(int num)
{
    int i, sum= 0;
    for(i = 1 ; i< num ; i++)
    {  
        if (num % i == 0)
        sum += i;  
    }
        if( sum == num )
            return 1;
        else
            return 0;
}

int main()
{
    int i, k, arr[20], choice, narr[20];
    
    
    do
    {
    cout<<"Input your choice: \n1.buzz numbers in array\n2.perfect numbers in aray\n3.EXIT\n";
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"input elements in array: "<<endl;
        for(i =0; i< 20 ; i++)
        {
            cin>>arr[i];
        }
        for(i =0,k=0 ; i< 20 ; i++)
        {
            if(buzz(arr[i]))
                narr[k++] = arr[i];
        }
        cout<<"buzz elements: "<<"[";
        for(i =0 ; i< k ; i++)
        {
            cout<<narr[i]<<",";
        }
        cout<<"\b]"<<endl;
        break;
        
    case 2:
        cout<<"input elements in array: "<<endl;
        for(i =0; i< 20 ; i++)
        {
            cin>>arr[i];
        }
        for(i =0,k=0 ; i< 20 ; i++)
        {
            if(perfect(arr[i]))
                narr[k++] = arr[i];
        }
        cout<<"perfect elements: "<<"[";
        for(i =0 ; i< k ; i++)
        {
            cout<<narr[i]<<",";
        }
        cout<<"\b]"<<endl;
        break;
        case 3:
            exit(1);
    }
    } while (choice != 3);
    
    return 0;
}
