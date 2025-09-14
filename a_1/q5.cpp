#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, address;
    char type;
    float amt, drate = 0.0, discount = 0.0, netamt;

    cout << "Enter customer name: ";
    getline(cin, name);
    cout << "Enter customer address: ";
    getline(cin, address);
    cout << "Enter purchase amount: ";
    cin >> amt;
    cout << "Enter type of purchase laptop or desktop: ";
    cin >> type;

    switch (type) {
        case 'L':
        case 'l':
            if (amt <= 25000)
                drate = 0.0;
            else if (amt <= 57000)
                drate = 5.0;
            else if (amt <= 100000)
                drate = 7.5;
            else
                drate = 10.0;
            break;

        case 'D':
        case 'd':
            if (amt <= 25000)
                drate = 5.0;
            else if (amt <= 57000)
                drate = 7.6;
            else if (amt <= 100000)
                drate = 10.0;
            else
                drate = 15.0;
            break;

        default:
            cout << "Invalid type of purchase entered." << endl;
            return 1;
    }

    discount = (drate / 100) * amt;
    netamt = amt - discount;

    cout << "\nInvoice:" << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Type: " << ((type == 'L' ||type == 'l')? "laptop" : "desktop")<<endl;

    cout << "Amount: " << amt << endl;
    cout << "Discount :  " << discount << endl;
    cout << "Net Amount : " << netamt << endl;

    return 0;
}
