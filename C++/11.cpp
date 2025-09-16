#include<bits/stdc++.h>


using namespace std;

class flightbooking{
    private:
        string passengername;
        int seattype;
        int distance;
    public:
        flightbooking(string passengername, int seattype, int distance): passengername(passengername), seattype(seattype), distance(distance){

        }
        int calculatefare(){
            int fare;
            if(seattype==1){
                fare = distance * 5;
            }
            else if(seattype==2){
                fare = distance * 10;
            }
            else{
                fare = -1; // invalid seat type
            }
            return fare;
        }
        void displayDetails(){
            cout<<"Passenger Name: "<<passengername<<endl;
            cout<<"Seat Type: "<<seattype<<endl;
            cout<<"Distance: "<<distance<<endl;
        }
};
int main(){

    //1 for economy, 2 for business
    //Distance in km

    flightbooking flight1("John Doe", 1, 500);
    flight1.displayDetails();
    cout<<"Calculated Fare: "<<flight1.calculatefare()<<endl;

    flightbooking flight2("Jane Smith", 2, 1000);
    flight2.displayDetails();
    cout<<"Calculated Fare: "<<flight2.calculatefare()<<endl;

    flightbooking flight3("Alice Johnson", 1, 1500);
    flight3.displayDetails();
    cout<<"Calculated Fare: "<<flight3.calculatefare()<<endl;

    return 0;
}


