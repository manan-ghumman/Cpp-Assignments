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


int power(int a, int n) {
    int i, num = 1;
    for (i = 1; i <= n; i++) {
        num = a * num;
    }
    return num;
}

int main(){
    int i, a, n;
    double sum = 1.0;

    cout<<"input n"<<endl;
    cin>>n;

    for(i =1;i<n ; i++)
    {
        sum += double(1.0+power(2,i))/fact(i);
    }
    cout<<sum<<endl;
    return 0;
}