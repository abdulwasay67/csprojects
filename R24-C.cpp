#include <iostream>
#include <string>
using namespace std;

/*Abstract class Account with pure virtual double interestRate().
Two child classes: SavingsAccount (higher interest, e.g. 5%) and CheckingAccount (lower interest, e.g. 1%) — each with a balance, constructor, and overrides interestRate().
Add a method double calculateInterest() in the base class (not pure virtual — a normal shared method) that returns balance * interestRate().
In main(), use a vector<Account*>, create one of each with new, push them in, loop through and print each account's interest earned.*/

class Abstractaccount {
    protected: 
     double balance;
     Abstractaccount(double balance) : balance(balance) {}

    public:
     virtual double interestRate() = 0;
     double calculateInterest() {
        return balance * interestRate();
     }
};

class SavingsAccount : public Abstractaccount{
    private: 
    double rate;
    public:
     SavingsAccount(double Balance, double Rate)
     : Abstractaccount(Balance), rate(Rate) {}
     double interestRate() override {
      return rate;
     }

};
class CheckingAccount : public Abstractaccount{
    private:
    double rate;
    public: 
     CheckingAccount(double Balance, double Rate)
     : Abstractaccount(Balance), rate(Rate) {}
     double interestRate() override {
       return rate;
     }

};
int main() {
    SavingsAccount S (3462362.1, 0.5);
    cout << S.calculateInterest() << endl;
    CheckingAccount C (183953521.56, 0.2);
    cout << C.calculateInterest() << endl;
}