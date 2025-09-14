#include<iostream>

using namespace std;

int main()
{
    double amt, discount, famt;

    cout<<"Welcome input amount for discount: "<<endl;
    cin>>amt;

    if(amt<=2000)
        discount = 0.05 * amt;
    else if(amt<=5000)
        discount = 0.25 * amt;
    else if(amt<=10000)
        discount = 0.35 *amt;
    else if(amt>10000)
        discount = 0.5* amt;
    
    cout<<"final discount: "<<discount<<endl;
    famt = amt - discount;
    cout<<"Your amount to pay"<<famt<<endl;

    return 0;
}