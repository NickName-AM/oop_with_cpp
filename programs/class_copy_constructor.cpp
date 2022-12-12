/*
Example of class Constructors
*/
#include<iostream>

using namespace std;

class Rectangle{
    int length;
    int breadth;
public:    
    Rectangle();                           // Default Constructor
    Rectangle(int, int);                   // Parametrized Constructor
    Rectangle(const Rectangle &myObj);    // Copy Constructor
    int area();
    Rectangle compareArea(Rectangle, Rectangle);
};

Rectangle::Rectangle(){
    length = 10;
    breadth = 10;
    cout << "[+] Default Rectangle Created." << endl;
}

Rectangle::Rectangle(int l, int b){
    length = l;
    breadth = b;
    cout << "[+] Custom Rectangle Created." << endl;
}

Rectangle::Rectangle(const Rectangle &myObj){
    length = myObj.length;
    breadth = myObj.breadth;
}

int Rectangle::area(){
    return length * breadth;
}

Rectangle Rectangle::compareArea(Rectangle myObj0, Rectangle myObj1){
    if (myObj1.area() > myObj0.area())
        return myObj1;
    else
        return myObj0;
}

int main(){
    Rectangle r1(4,5);          // Calling Parametrized Constructor
     
    Rectangle r2(r1);          // Calling Copy Constructor
    // Rectangle r2 = r1;       // Alternative way(without defining copy constructor)

    cout << r2.compareArea(r2, r1).area() << endl;
    return 0;
}