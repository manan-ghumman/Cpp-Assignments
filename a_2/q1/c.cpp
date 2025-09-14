#include<iostream>

using namespace std;

int main(){
    
    int i, a, n;
    double sum=0.0;
    cout<<"input a \n ";
    cin>>a;
    for(i=2;i<=20;i++)
    {
        sum+=((double)a/i);
    }
    cout<<sum<<endl;
    
    return 0;
}