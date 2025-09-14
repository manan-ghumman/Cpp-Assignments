#include<bits/stdc++.h>

using namespace std;

class Bank {
private:
    string name;
    string address;
    int accountNumber;
    double balance;
    static int nextAccountNumber;

public:
    Bank(string n, string addr, double bal) {
        name = n;
        address = addr;
        balance = bal;
        accountNumber = nextAccountNumber++;
    }

    void displayInfo() {
        cout << "\nDepositor Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Address: " << address << endl;
        cout << "Balance: Rs." << balance << endl;
    }

    void deposit(double amount) {
        if(amount > 0) {
            balance += amount;
            cout << "\nRs." << amount << " deposited successfully!" << endl;
        }
    }

    void withdraw(double amount) {
        if(amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "\nRs." << amount << " withdrawn successfully!" << endl;
        } else {
            cout << "\nInsufficient balance or invalid amount!" << endl;
        }
    }

    void changeAddress(string newAddress) {
        address = newAddress;
        cout << "\nAddress updated successfully!" << endl;
    }

    int getAccountNumber() {
        return accountNumber;
    }
};

int Bank::nextAccountNumber = 1001;

int main() {
    vector<Bank> accounts;
    int n;
    
    cout << "Enter number of depositors: ";
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++) {
        string name, address;
        double balance;

        cout << "\nEnter details for depositor " << (i+1) << ":" << endl;
        cout << "Name: ";
        getline(cin, name);
        cout << "Address: ";
        getline(cin, address);
        cout << "Initial Balance: ";
        cin >> balance;
        cin.ignore();

        accounts.push_back(Bank(name, address, balance));
    }

    int choice;
    do {
        cout << "\n1. Display depositor information";
        cout << "\n2. Deposit amount";
        cout << "\n3. Withdraw amount";
        cout << "\n4. Change address";
        cout << "\n5. Exit";
        cout << "\nEnter choice (1-5): ";
        cin >> choice;

        if(choice != 5) {
            int acc_num;
            cout << "Enter account number: ";
            cin >> acc_num;

            auto it = find_if(accounts.begin(), accounts.end(),
                [acc_num](Bank& b) { return b.getAccountNumber() == acc_num; });

            if(it != accounts.end()) {
                switch(choice) {
                    case 1:
                        it->displayInfo();
                        break;
                    case 2:
                        double depAmount;
                        cout << "Enter amount to deposit: ";
                        cin >> depAmount;
                        it->deposit(depAmount);
                        it->displayInfo();
                        break;
                    case 3:
                        double withAmount;
                        cout << "Enter amount to withdraw: ";
                        cin >> withAmount;
                        it->withdraw(withAmount);
                        it->displayInfo();
                        break;
                    case 4:
                        string newAddr;
                        cin.ignore();
                        cout << "Enter new address: ";
                        getline(cin, newAddr);
                        it->changeAddress(newAddr);
                        it->displayInfo();
                        break;
                }
            } else {
                cout << "\nAccount not found!" << endl;
            }
        }
    } while(choice != 5);

    return 0;
}

