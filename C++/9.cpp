#include<bits/stdc++.h>

using namespace std;

class LibraryUser{
    private:
        string uname;
        string bookname;
        int late;
    public:

        LibraryUser(string uname, string bookname , int late): uname(uname), bookname(bookname), late(late){

        }
        int calculateFine(){
            if(late<=5){
                return late*2;
            }
            else if(late>5 && late<=10){
                return 5*2 + (late-5)*5;
            }
            else{
                return 5*2 + 5*5 + (late-10)*10;
            }
        }


};

int main()
{

    LibraryUser ob1("manan", "C++", 12);
    cout<<"fine is: "<<ob1.calculateFine()<<endl;

    LibraryUser ob2("john", "java", 3);
    cout<<"fine is: "<<ob2.calculateFine()<<endl;

    LibraryUser ob3("alice", "python", 8);
    cout<<"fine is: "<<ob3.calculateFine()<<endl;

    return 0;
}
