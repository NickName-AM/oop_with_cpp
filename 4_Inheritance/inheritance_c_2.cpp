#include<iostream>

using namespace std;

class Parent{
    protected:
    int x;
    int y;
    public:
    
    // Parent(int a, int b):x(a), y(b){}

    void display(){
        cout << "x: " << x << "\ny: " << y << endl;
    }

    void lol(){
        cout << "lol" << endl;
    }
};


class Child: protected Parent{
    int z;
    public:
    // Child(int a, int b, int c): Parent(a,b), z(c){}
};


int main(){
    Child c;
    c.lol();

}