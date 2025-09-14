#include<iostream>


using namespace std;

int check(){
    int age; 
    string gender;
    
    cout<<"input your age: "<<endl;
    cin>>age;
    cout<<"input your gender"<<endl;
    cin>>gender;

    if (age>18 && age<65 && gender == "male" || gender == "Male")
        return 1;

    else
        return 0;
}

int main(){

    double ti, tax;

    if (!check())
    {
        exit(0);
    }
    
    cout<<"input total income of yours: "<<endl;
    cin>>ti;

    if (ti<160000)
        cout<<"no tax";
    else if(ti<=500000)
        cout<<"tax is: "<<((ti - 160000 )* 0.1);
    else if(ti<=800000)
        cout<<"tax is: "<<(((ti - 500000 )* 0.2) + 34000);
    else if(ti>800000)
        cout<<"tax is: "<<(((ti - 800000 )* 0.3) + 94000);

    return 0;
}