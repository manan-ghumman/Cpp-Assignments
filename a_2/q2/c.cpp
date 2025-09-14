#include <iostream>

using namespace std;

int fact(int n){
    int i,result=1;
    for (i =n; i>1 ; i--)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int n, i; 
    double sum=0.0, a;
    cout<<"input a,n"<<endl;
    cin>>a>>n;
    for(i=1;i<=n ;i++)
    {
        if(i%2==0)
        sum -= (double)a/fact(i);
        else
        sum += (double)a/fact(i);
    }
    cout<<sum<<endl;
    return 0;
}