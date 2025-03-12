#include<iostream>
using namespace std;

class Customer {
    string name;
    int account_number;
    int balance;

public:
    // Default Constructor
    Customer() {
        name = "Anuj";
        account_number = 5;
        balance = 100;
    }

    // Parameterized Constructor
    Customer(string name, int account_number, int balance) { // Parameter order corrected
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }

    // Constructor Overloading
    Customer(string a, int b, int c = 0) { // Added default value for balance
        name = a;
        account_number = b;
        balance = c;
    }

    // Copy Constructor
    Customer(const Customer &B) { // `const` added for safety
        name = B.name;
        account_number = B.account_number;
        balance = B.balance;
    }

    // Display Function
    void display() {
        cout << name << " " << account_number << " " << balance << endl;
    }
};

int main() {
    Customer A1;
    Customer A2("Anuj", 100, 23); // Parameter order matches constructor
    Customer A3("Anuj", 10, 1000);
    A3.display();
    A1.display();
    A2.display();
    
    Customer A4("John", 3); // Now works correctly
    A4.display();

    Customer A5;
    A5 = A3;

    return 0;
}
