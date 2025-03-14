// Static Data Member and Function

// - They are attributes of the class (class members).
// - Declared using the `static` keyword.
// - Only one copy of a static member exists for the entire class, shared by all objects.
// - It is initialized before any object of this class is created.

#include <iostream>
using namespace std;

class Customer {
    string name;
    int account_number;
    int balance;
    static int total_customer;
    static int total_balance;

public:
    // Constructor
    Customer(string name, int account_number, int balance) {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        total_customer++;
        total_balance += balance;
    }

    // Static member function
    static void accessStatic() {  
        cout << "Total number of customers: " << total_customer << endl;
        cout << "Total Balance: " << total_balance << endl;
    }

    // Deposit function
    void deposit(int amount) {
        if (amount > 0) {
            balance += amount;
            total_balance += amount;
        }
    }

    // Withdraw function
    void withdraw(int amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            total_balance -= amount;
        }
    }

    // Display function
    void display() {
        cout << "Name: " << name << ", Account Number: " << account_number
             << ", Balance: " << balance << endl;
    }

    // Display total customers
    void display_total() {
        cout << "Total Customers: " << total_customer << endl;
    }
};

// Initialize static data members
int Customer::total_customer = 0;
int Customer::total_balance = 0;

int main() {
    Customer A1("Anuj", 1, 1000);
    Customer A2("Kumar", 2, 3000);
    
    A2.display_total();

    Customer A3("Rohit", 3, 2000);
    
    A2.display_total();

    // Static function call
    Customer::accessStatic();

    A1.display_total();
    A1.deposit(800);
    
    return 0;
}
 