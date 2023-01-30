#include<iostream>
#include<fstream>

using namespace std;

class Student{
    string name;
    int age;
    string address;
    double marks[5];
    
    public:
    Student(string n, int a, string addr, double m[5]){
        this->name = n;
        this->age = a;
        this->address = addr;
        for(int i=0; i<5; i++)
            this->marks[i] = m[i];
    }

    int save(string filename="students.txt"){
        ofstream fd;
        fd.open(filename, ios::app | ios::out);
        if (!fd)
            return -1;
        fd << this->name << "\t\t" << this->age << "\t\t" << this->address << "\t\t" << get_percentage() << "%" << endl;
        return 0;
    }

    double get_percentage(){
        double p = 0;
        for(int i=0; i<5; ++i)
            p += this->marks[i];
        
        return p/5;
    }
    
};

int main(){
    double marksV[] = {50,50,50,50,50};
    double marksE[] = {50,60,70,80,90};
    double marksM[] = {50,45,50,20,30};
    Student myStudentV("Vinick", 18, "Home", marksV);
    Student myStudentE("Eliya", 19, "Home", marksE);
    Student myStudentM("Mario", 123, "MarioLand", marksM);
    myStudentV.save();
    myStudentE.save();
    myStudentM.save();
    return 0;
}