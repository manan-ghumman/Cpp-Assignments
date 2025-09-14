#include<iostream>

using namespace std;

int power(int a, int n) {
    int i, num = 1;
    for (i = 1; i <= n; i++) {
        num = a * num;
    }
    return num;
}


int main()
{
    double  sum =0.0;
    int i,a,n;

    cout<<"input a , n \n";
    cin>>a>>n;

    for(i=1; i<=n; i++)
    {
        sum = sum +((double)i/power(a,i));
    }
    cout<<sum<<endl;
}