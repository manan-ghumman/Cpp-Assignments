//class to store marks of 6 subjects and calculate average and grade

#include<bits/stdc++.h>

using namespace std;

class Student{
    private:
        string name;
        int roll;
        int marks[6];
    public:
        Student(string name, int roll, int marks[6]): name(name), roll(roll){
            for(int i=0; i<6; i++){
                this->marks[i] = marks[i];
            }
        }
        double calculateAverage(){
            double sum = 0;
            for(int i=0; i<6; i++){
                sum += marks[i];
            }
            return sum/6;
        }
        char determineGrade(){
            double avg = calculateAverage();
            if(avg>=90) return 'A';
            else if(avg>=80) return 'B';
            else if(avg>=70) return 'C';
            else if(avg>=60) return 'D';
            else return 'F';
        }
        void displayDetails(){
            cout<<"Name: "<<name<<endl;
            cout<<"Roll Number: "<<roll<<endl;
            cout<<"Marks: ";
            for(int i=0; i<6; i++){
                cout<<marks[i]<<" ";
            }
            cout<<endl;
            cout<<"Average: "<<calculateAverage()<<endl;
            cout<<"Grade: "<<determineGrade()<<endl;
        }
};

int main()
{
    int marks1[6] = {85, 90, 78, 92, 88, 76};
    Student student1("John Doe", 101, marks1);
    student1.displayDetails();

    int marks2[6] = {65, 70, 72, 68, 74, 60};
    Student student2("Jane Smith", 102, marks2);
    student2.displayDetails();

    int marks3[6] = {95, 98, 92, 96, 94, 99};
    Student student3("Alice Johnson", 103, marks3);
    student3.displayDetails();

    return 0;
}