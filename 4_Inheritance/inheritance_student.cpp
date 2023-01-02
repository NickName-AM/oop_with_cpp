#include<iostream>
using namespace std;

class Person{
    string name;
    int age;

    public:
    Person(string n, int a): name(n), age(a){}

    void display(){
        cout << "Name: "<< name << "\nAge: " << age << endl;
    }
};

class Student: public Person{
    double marks_obtained;
    public:
    Student(string n, int a, double m): Person(n, a), marks_obtained(m){}

    double getPercent(){
        return marks_obtained/5;
    }
};


int main(){
    Student s("Rameshwor", 20, 400);

    cout << s.getPercent() << "%" << endl;

}