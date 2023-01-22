#include<iostream>

using namespace std;

// Abstract Class - Cannot create an object
class Shape{
    public:
    // Pure virtual function
    virtual void area() = 0 ;    
    
};

class Rectangle: public Shape{
    int length;
    int breadth;
    public:
    Rectangle(int l, int b): length(l), breadth(b){}
    void area(){
        cout << "Area: " << length * breadth << endl;
    }
};

int main(){
    Rectangle rob(34.5,2);
    Shape *obj = &rob;

    obj->area();

    return 0;
}