#include<bits/stdc++.h>

using namespace std;

class employee{
    private:
    int pan;
    string name;
    float taxincome;
    float Tax;

    public:

    void getinfo(){
        cout<<"Enter PAN: ";
        cin>>pan;
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Taxable Income: ";
        cin>>taxincome;
    }

    void calculateTax(){
        if(taxincome<=250000){
            Tax=0;
        }
        else if(taxincome>250000 && taxincome<=300000){
            Tax=0.1*(taxincome-250000);
        }
        else if(taxincome>300000 && taxincome<=400000){
            Tax=5000+0.2*(taxincome-300000);
        }
        else{
            Tax=25000+0.3*(taxincome-400000);
        }
    }


    void displayInfo(){
        cout<<"PAN: "<<pan<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Taxable Income: "<<taxincome<<endl;
        cout<<"Tax: "<<Tax<<endl;
    }

};

int main()
{
    employee ob;
    ob.getinfo();
    ob.calculateTax();
    ob.displayInfo();

    return 0;
}