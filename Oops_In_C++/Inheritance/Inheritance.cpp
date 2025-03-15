// Inheritance
// The capability of a class to derive property and characteristic from another class. 

#include<iostream>
using namespace std;


class Human {

    // Access Modifiers

    // private:
    // int a;
    // protected:
    // int b;
    // public:
    // int c;




    // void fun(){
    //     a = 10;
    //     b = 20;
    //     c = 30;
    // }

    public:
    string name;
    int age, weight;
};

class Student: protected Human{
    int roll_number, fees;
};

int main(){
    // Human Anuj;
    // Anuj.c = 10;
    // Anuj.fun();
    Student A;
    A.name = "Anuj";

};