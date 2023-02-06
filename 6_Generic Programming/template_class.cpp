#include<iostream>
using namespace std;

template <class T1, class T2>
class Student{
    T1 name;
    T2 age;
    public:
    Student(T1 name, T2 age){
        this->name = name;
        this->age = age;
    }

    void display(){
        cout << this->name << endl << this->age << endl;
    }
};

int main(){
    Student<string, int>("Vinick",200).display();

    return 0;
}