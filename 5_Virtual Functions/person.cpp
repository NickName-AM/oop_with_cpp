#include<iostream>

using namespace std;

// Abstract Class
class Person{
protected:
    string name;
    int age;
public:
    Person(string n, int a): name(n), age(a){}
    
    // Virtual Functions
    virtual void display() = 0;
    virtual void calculate_percentage() = 0;
    
};

class Student: public Person{
    int *marks = new int[5];
    public:
    Student(string n, int a, int m[]): Person(n, a){ 
        for(int i = 0; i < 5; ++i) 
            marks[i] = m[i]; 
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        string subjects[5] = {"Math", "OOP", "Stat", "DS", "MP"};
        for (int i = 0; i<5; ++i)
            cout << subjects[i] << " : " << marks[i] << endl;
    }

    void calculate_percentage(){
        int s = 0;
        for(int i = 0; i<5; ++i)
            s+=marks[i];
        cout << "Percentage: " << s / 5 << "%" << endl;
    }
};

int main(){
    int marks[5] = {50,50,50,50,50};
    Student s("ram", 12, marks);
    Person *p = &s;

    p->display();
    p->calculate_percentage();
    return 0;
}