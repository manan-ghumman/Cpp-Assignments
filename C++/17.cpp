#include<bits/stdc++.h>

using namespace std;

class person{
    private:
        string name;
        int age;
        string address;
    public:
        person(){
            name = "Unknown";
            age = 0;
            address = "Unknown";
        }
        person(string name, int age, string address): name(name), age(age), address(address){
        }
        void showinfo(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Address: "<<address<<endl;
        }
};

int main()
{
    person p1;
    p1.showinfo();

    person p2("manan", 20, "123 street");
    p2.showinfo();

    person p3("john", 25, "456 avenue");
    p3.showinfo();

    person p4("alice", 30, "789 boulevard");
    p4.showinfo();

    return 0;
}