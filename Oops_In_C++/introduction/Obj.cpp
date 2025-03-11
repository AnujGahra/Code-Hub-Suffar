#include<iostream>
using namespace std;

// class a {
//     char c;
//     char d;
//     int b;
//     double e;

// };

class Student {
    public:
    string name;
    int age, roll_number;
    string grade;
};


int main(){
    // a obj;
    // cout << sizeof(obj) << " ";
    Student *S = new Student;
    (*S).name = "Anuj";
    (*S).age = 22;
    (*S).grade = "A";
    (*S).roll_number = 18;

    cout << S->name << " ";
    cout << S->age << " ";
}