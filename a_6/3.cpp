#include<bits/stdc++.h>

using namespace std;

class SavingsAccount{
    private:
    static double annualInterestRate;
    double balance;

    public:
    SavingsAccount(double b): balance(b) {
    }
    void calculateMonthlyInterest(){
        double interest = (balance * SavingsAccount::annualInterestRate) / 12;
        cout << "Monthly Interest: " << interest << endl;
    }
    static void setAnnualInterestRate(double rate) {
        SavingsAccount::annualInterestRate = rate;
    }

} ;
double SavingsAccount::annualInterestRate = 0.04;

int main()
{
    SavingsAccount server1(2000.0), server2(3000.0);
    server1.calculateMonthlyInterest();
    server2.calculateMonthlyInterest();

    SavingsAccount::setAnnualInterestRate(0.05);
    server1.calculateMonthlyInterest();
    server2.calculateMonthlyInterest();

    return 0;
}

