#include<bits/stdc++.h>
using namespace std;

int findMax(int arr[], int size){
    int max = arr[0];
    for(int i=1; i<size; i++){
        if(arr[i]>max)
            max = arr[i];
    }
    return max;
}
int findMin(int arr[], int size){
    int min = arr[0];
    for(int i=1; i<size; i++){
        if(arr[i]<min)
            min = arr[i];
    }
    return min;
}

int main(){
    int arr[100], n;
    cout<<"enter number of elements"<<endl;
    cin>>n;
    cout<<"enter elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"maximum is: "<<findMax(arr,n)<<endl;
    cout<<"minimum is: "<<findMin(arr,n)<<endl;
    return 0;
}