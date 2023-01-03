#include<iostream>

using namespace std;

class Parent{
    private:
    int x;
    int y;
    public:
    
    Parent(int a, int b):x(a), y(b){}

    void display(){
        cout << "x: " << x << "\ny: " << y << endl;
    }
};


class Child: private Parent{
    int z;
    public:
    Child(int a, int b, int c): Parent(a,b), z(c){}
};


int main(){
    Child c(1,2,3);

    c.display();
}