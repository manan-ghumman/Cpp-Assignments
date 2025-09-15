#include<bits/stdc++.h>

using namespace std;    

class employee{
    private:
        string name;
        int id;
        float salary;
    public:
        employee(string name, int id, float salary): name(name), id(id), salary(salary){

        }
        float salaryaftertax(){
            salary = salary - (salary*0.1);
            return salary;
        }
        void displayDetails(){
            cout<<"Name: "<<name<<endl;
            cout<<"ID: "<<id<<endl;
            cout<<"Salary: "<<salary<<endl;
        }
};

int main()
{
    employee emp1("manan", 101, 50000);
    emp1.displayDetails();
    cout<<"Salary after tax: "<<emp1.salaryaftertax()<<endl;

    employee emp2("john", 102, 60000);
    emp2.displayDetails();
    cout<<"Salary after tax: "<<emp2.salaryaftertax()<<endl;

    employee emp3("alice", 103, 70000);
    emp3.displayDetails();
    cout<<"Salary after tax: "<<emp3.salaryaftertax()<<endl;

    return 0;
}