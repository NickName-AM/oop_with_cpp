/*
class Student
name string
age int
marks double[5]

Student(name, age marks)
displayInfo()
displayPercentage()
compareMarks(Student)  // Total maks

0 - Stats
1 - OOP
2 - Math
3 - DS
4 - MP
*/

#include<iostream>

using namespace std;

class Student{
    string name;
    int age;
    double marks[5];

public:
    // Constructor prototype
    Student(string , int , double *);
    double totalMarks();
    void displayInfo();
    void displayPercentage();
    Student compareMarks(Student, Student);
};

// Constructor
Student::Student(string myName, int myAge, double *myMarks){
    name = myName;
    age = myAge;
    marks[0] = myMarks[0];
    marks[1] = myMarks[1];
    marks[2] = myMarks[2];
    marks[3] = myMarks[3];
    marks[4] = myMarks[4];
}

// Custom
double Student::totalMarks(){
    int i = 0;
    double total = 0;
    for(i; i<5; ++i){
        total += marks[i];
    }
    return total;
}

void Student::displayInfo(){
    cout << name << endl;
    cout << age << endl;
    cout << "Marks in: " << endl;
    cout << "Stats: " << marks[0] << endl;
    cout << "OOP: " << marks[1] << endl;
    cout << "Math: " << marks[2] << endl;
    cout << "DS: " << marks[3] << endl;
    cout << "MP: " << marks[4] << endl;
}

void Student::displayPercentage(){
    double percent = totalMarks() / 5;
    cout << "Percentage: " << percent << "%" << endl;
}

Student Student::compareMarks(Student s1, Student s2){
    return s1.totalMarks() > s2.totalMarks() ? s1: s2;
}

int main(){
    string name0 = "Mario";
    int age0 = 100;
    double marks0[5] = {51,52,53,54,55};
    Student myStudent0(name0, age0, marks0);    
    myStudent0.displayInfo();
    cout << myStudent0.totalMarks() << endl;
    
    cout << endl;

    string name1 = "Maria";
    int age1 = 101;
    double marks1[5] = {52,52,53,54,52};
    Student myStudent1(name1, age1, marks1);
    myStudent1.displayInfo();
    cout << myStudent1.totalMarks() << endl;


    Student stdntGreat = myStudent1.compareMarks(myStudent0, myStudent1);

    cout << stdntGreat.totalMarks() << endl;

    return 0;
}