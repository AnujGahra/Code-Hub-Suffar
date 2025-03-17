// Single Inheritance
#include<iostream>
using namespace std;


class Human{
    protected:
    string name;
    int age;

    public:
    Human(){
        cout << "Hello Human\n";
    }

    void work()
    {
        cout << "I am working \n";
    }
};


class Student: public Human {
    int roll_number, fees;

    public:
    // Student(string name, int age, int roll_number, int fees){
    //     this->name = name;
    //     this->age = age;
    //     this->roll_number = roll_number;
    //     this->fees = fees;
    // }
    Student(){
        cout << "Hello student\n";
    }
};

int main(){
    Student A1;
    // Student A1("Anuj", 23, 32, 99);
    // A1.work();
};