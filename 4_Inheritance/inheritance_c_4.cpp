#include<iostream>

using namespace std;

class Shape{
protected:
    int length;
    int breadth;

public:    
    Shape(int l, int b): length(l), breadth(b){}

    void setLength(int l){
        length = l;
    }
    
    void setBreadth(int b){
        breadth = b;
    }
    
    int area(){
        return length * breadth;
    }
};

class Cuboid: public Shape{
protected:
    int height;

public:
    Cuboid(int l, int b, int h): Shape(l, b), height(h){}
    void setHeight(int h){
        height = h;
    }

    int volume(){
        return length * breadth * height;
    }
};

class Rectangle: public Shape{
    public:
    Rectangle(int l, int b): Shape(l, b){}

    int area(){
        return length * breadth;
    }
};

int main(){
    Cuboid c(10,10,6);
    Rectangle r(10,10);

    cout << c.volume() << endl;
    cout << r.area() << endl;
    return 0;
}