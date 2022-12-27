#include<iostream>

using namespace std;


// A Person class
class Person{
public:
    string firstname;
    string lastname;
    uint age;
    string address;
    bool isAlive;

    // A method(function) to return a person's fullname
    string fullname(){
        return firstname + " " + lastname;
    }
};

// A Student class which inherits from the Person class
// since a student is also a person
class Student: public Person{
public:
    uint roll;

    // A method to determine if a student is amazing
    bool isAmazing(){
        if(roll < 10) {
            return true;
        }
        return false;
    }
};

int main() {
    Student my;
    my.firstname = "Shishir";
    my.lastname = "Gautam";
    my.age = 30;
    my.address = "Baneshwor";
    my.isAlive = true;

    cout << my.isAmazing() << endl;
}