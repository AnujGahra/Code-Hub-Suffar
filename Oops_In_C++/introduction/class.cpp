#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age, roll_number;
    string grade;

public:
    // Setters
    void setName(string s) {
        name = s;
    }

    void setAge(int a) {
        age = a;
    }

    void setRoll(int r) {
        roll_number = r;
    }

    void setGrade(string s) {
        grade = s;
    }

    // Getters
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    int getRoll() {
        return roll_number;
    }

    string getGrade(int pin) {
        if (pin == 123)
            return grade;
        return "Access Denied";
    }

    // Function to display student details
    void displayStudentInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << roll_number << endl;
    }
};

int main() {
    Student S1;

    // Setting values using setter methods
    S1.setName("Anuj Kumar");
    S1.setAge(22);
    S1.setRoll(18);
    S1.setGrade("A");

    // Displaying student details
    S1.displayStudentInfo();

    // Accessing grade with a PIN
    int pin;
    cout << "Enter PIN to view grade: ";
    cin >> pin;
    cout << "Grade: " << S1.getGrade(pin) << endl;

    return 0;
}
