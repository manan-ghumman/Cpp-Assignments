#include <bits/stdc++.h>
#include<conio.h>

using namespace std;

class toll{
    private:
        unsigned int cars;
        double money;

    public:

    toll(){
        cars = 0;
        money = 0.0;
    }

    
    int paying(int pay){
        cars++;
        money+= pay;
        return 1;
    }
    int notPaying(){
        cars++;
        return 1;
    }
    void display(){
        cout<<"number of cars: "<<cars<<endl;
        cout<<"cash collected: "<<money<<endl;
    }

}   t;




int main()
{
    char choice;

    do{
        cout<<"1. paying car"<<endl;
        cout<<"2. not paying car"<<endl;
        cout<<"3. display toll information"<<endl;
        cout<<"4.press escape to exit"<<endl;
        cout<<"input your choice"<<endl;
        choice = _getch();
        if(choice == 27)
        {
            t.display();
            exit(0);
        }

    switch(choice){

        case '1':
            int payment;
            cout<<"enter payment amount: ";
            cin>>payment;
            t.paying(payment);
            break;

        case '2':
            t.notPaying();
            break;

        case '3':
            t.display();
            break;

        default:
            cout<<"invalid choice"<<endl;
    }
    }while(1);
    
    return 0;
}