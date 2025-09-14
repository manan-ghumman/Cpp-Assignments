#include<bits/stdc++.h>

using namespace std;

class student{
    private:

        string name;
        int rollno;
        struct marks{
            float sub1, sub2, sub3;
        } m;
        float percentage;

    public:
        void getInfo(){
            cout<<"Enter Name: ";
            cin>>name;
            cout<<"Enter Roll No: ";
            cin>>rollno;
            cout<<"Enter marks for 3 subjects: ";
            cin>>m.sub1>>m.sub2>>m.sub3;
        }

        void calculatePercentage(){
            float total = m.sub1 + m.sub2 + m.sub3;
            percentage = (total / 300) * 100;
        }

        void displayInfo(){
            cout<<"Name: "<<name<<endl;
            cout<<"Roll No: "<<rollno<<endl;
            cout<<"Marks: "<<m.sub1<<" "<<m.sub2<<" "<<m.sub3<<endl;
            cout<<"Percentage: "<<percentage<<"%"<<endl;
        }
};

int main()
{
    student s[100];
    int n;

    cout<<"Enter number of students: ";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Entering details for student "<<i+1<<endl;
        s[i].getInfo();
        s[i].calculatePercentage();
    }

    cout<<"Displaying student information:"<<endl;
    for(int i=0; i<n; i++){
        s[i].displayInfo();
    }

    return 0;
}