#include<bits/stdc++.h>

using namespace std;

class ArrDemo{

    public:
        static void arrfunction1(int arr[], int size, int target)
        {  
            //sort 
            for(int i =0 ; i< size-1 ; i++)
            {
                for (int j =0; j<size-1-i; j++)
                {
                    if(arr[j] > arr[i])
                        swap(arr[j], arr[i]);
                }
            }
            //search
            int trgt =0;
            int i, j;
            for( i =0 ; i< size ; i++)
            {
                int found =0;
                for ( j =0 ; j< size ; j++)
                {
                    if(arr[i] + arr[j] == target)
                    {
                        found = 1;
                        break; 
                    }
                    if(found)
                    {
                        break;
                    }   
                }
            }
            cout<< i<<", "<<j<<endl;


        }
        static void arrfunction2(int a1[] , int size1, int a2[], int size2)
        {
            int fa[100], k =0;
            bool flag = true;
            for(int i =0 ; i<size1; i++)
            {
                fa[k++] = a1[i];
            }

            for (int i = 0; i < size2; i++)
            {
                flag = true;
                for(int j =0; j<size1 ; j++)
                {
                    if (a1[j] == a2[i])
                    {
                        flag = false;
                    }  
                }
                if (flag)
                    fa[k++] = a2[i];
            }
            for (int i =0 ; i<k ; i++)
            {
                cout<<fa[i]<<" ";
            }


        }


};


int main()
{
    int arr[] ={10,20,40};
    int arr2[] ={10,30,23};
    int size = sizeof(arr)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);
    ArrDemo::arrfunction1(arr, size, 50 );
    ArrDemo::arrfunction2(arr, size, arr2,size2);

    return 0;
}