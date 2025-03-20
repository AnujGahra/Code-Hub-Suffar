#include <iostream>
using namespace std;

class Customer
{
    string name;
    int balance, account_number;

public:
    // Constructor
    Customer(string name, int balance, int account_number)
    {
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }

    // Deposit method with exception handling
    void deposit(int amount)
    {
        if (amount <= 0)
        {
            throw invalid_argument("Deposit amount must be greater than zero.");
        }
        balance += amount;
        cout << amount << " is credited successfully\n";
    }

    // Withdraw method with exception handling
    void withdraw(int amount)
    {
        if (amount <= 0)
        {
            throw invalid_argument("Withdrawal amount must be greater than zero.");
        }
        if (amount > balance)
        {
            throw runtime_error("Insufficient balance! Withdrawal failed.");
        }
        balance -= amount;
        cout << amount << " is debited successfully\n";
    }
};

int main()
{
    try
    {
        Customer C1("Rohit", 5000, 10);
        C1.deposit(100);
        C1.withdraw(6000); // This will cause an exception
    }
    catch (const exception &e)
    {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
