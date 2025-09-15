#include<bits/stdc++.h>

using namespace std;

typedef struct student{
    string name;
    int roll;
    double m1,m2,m3;
} s;

int main()
{
    int k=0;
    s stud[25];
    while(true)
    {
        cout<<"1.do you want to enter student details?\n2.check at index\n3.show all\n4.Exit.\n "<<endl;
        int choice;
        cin>>choice; 
        switch(choice){
            case 1:
                {
                    static int i=0;
                    cout<<"enter name, roll and marks of student"<<endl;
                    cin>>stud[i].name>>stud[i].roll>>stud[i].m1>>stud[i].m2>>stud[i].m3;
                    i++;
                    k++;
                    break;
                }
            case 2:
                {
                    cout<<"enter index to check details"<<endl;
                    int index;
                    cin>>index;
                    if(index<0 || index>24){
                        cout<<"invalid index"<<endl;
                        break;
                    }
                    cout<<"name: "<<stud[index].name<<endl;
                    cout<<"roll: "<<stud[index].roll<<endl;
                    cout<<"marks: "<<stud[index].m1<<", "<<stud[index].m2<<", "<<stud[index].m3<<endl;
                    break;
                }
            case 3:
                {
                    for(int j=0; j<k; j++){
                        if(stud[j].name!=""){
                            cout<<"Details of student at index "<<j<<":"<<endl;
                            cout<<"name: "<<stud[j].name<<endl;
                            cout<<"roll: "<<stud[j].roll<<endl;
                            cout<<"marks: "<<stud[j].m1<<", "<<stud[j].m2<<", "<<stud[j].m3<<endl;
                        }
                    }
                    break;
                }
            case 4:
                exit(0);
            default:
                cout<<"invalid choice"<<endl;
                break;
        }
    }

    return 0;
}
