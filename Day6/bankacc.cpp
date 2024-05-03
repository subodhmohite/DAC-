/*2:Create cpp application for bank account handling.
2.1. Create a class BankAccount -- acct no(int),customer name(string),balance(double)
Add  constr. (2 constrs : first to accept all details )

2.2 Add Business logic methods
Methods
public void withdraw(double amt) 
public void deposit(double amt)*/


#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    int acctNo;
    string customerName;
    double balance;

public:
    // Constructors
    BankAccount(){
    acctNo=0;
    customerName="Null";
    balance=0;
    }
    BankAccount(int a, const string cname, double b){
        acctNo=a;
        customerName=cname,
        balance=b;
        
    }

    // Business logic methods
    void withdraw(double amt) {
        if (amt > 0 && amt <= balance)
         {
            balance= balance-amt;
            cout << "Withdrawal of Rs" << amt << " successful. Current balance: Rs" << balance << endl;
        } 
        else
        {
            cout << "Invalid withdrawal amount or insufficient balance." << endl;
        }
    }

    void deposit(double amt) 
    {
        if (amt > 0) 
        {
            balance= balance+amt;
            cout << "Deposit of Rs" << amt << " successful. Current balance: Rs" << balance << endl;
        } else 
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Display account details
    void display() {
        cout << "Account Number: " << acctNo << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Balance: Rs" << balance << endl;
    }
};

int main() 
{
    // Create a bank account object
    BankAccount account(8450, "V Mohite", 10000.0);

    // Display account details
    cout << "Initial Account Details:" << endl;
    account.display();

    // Perform transactions
    account.deposit(100.0);
    account.withdraw(1000.0);
    

    // Display updated account details
    cout << "Updated Account Details:" << endl;
    account.display();

    return 0;
}