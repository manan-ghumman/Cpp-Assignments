#include<bits/stdc++.h>

using namespace std;


int main(){

    cout<<"enter month as a number and year"<<endl;
    int month, year;
    cin>>month>>year;
    if(!(month<=12 && month>=1) || year<0){
        cout<<"invalid input";
    }
    switch (month)
    {
    case 2:
        if((year%4==0 && year%100!=0) || (year%400==0)){
            cout<<"29 days";
        }
        else{
            cout<<"28 days";
        }
        break;
        
    case 4:
    case 6:
    case 9:
    case 11:
        cout<<"30 days";
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout<<"31 days";
        break;
    default:
        break;
    }
    return 0;
}