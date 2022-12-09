#include<iostream>

using namespace std;

class Student{
public:
    string firstname;
    string lastname;
    uint age;
    uint roll;

    bool isAmazing(){
        if (fullname() == "someone something"){
            return true;
        }
        return false;
    }

    string fullname(){
        return firstname + " " + lastname;
    }
};

int main(){
    Student someone;
    someone.firstname = "someone";
    someone.lastname = "something";
    someone.age = 12;
    someone.roll = 10;

    cout << someone.isAmazing() << endl;

    return 0;
}