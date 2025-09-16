#include<bits/stdc++.h>

using namespace std;

//function overloading to display sum of two or three numbers
int sum(int a, int b){
    return a+b;
}  
int sum(int a, int b, int c){
    return a+b+c;
}

int main(){
    int a, b, c;
    cout<<"enter two numbers to find sum"<<endl;
    cin>>a>>b;
    cout<<"sum of two numbers is: "<<sum(a,b)<<endl;

    cout<<"enter three numbers to find sum"<<endl;
    cin>>a>>b>>c;
    cout<<"sum of three numbers is: "<<sum(a,b,c)<<endl;

    return 0;
}
