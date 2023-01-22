#include<iostream>

using namespace std;

class A{
    public:
    virtual void display(){
        cout << "Hello from A::display()" << endl;
    }
};

class B: public A{
    public:
    void display(){
        cout << "Hello from B::display()" << endl;
    }
};

int main(){
    B b;
    A *obj = &b;
    obj->display();

    return 0;
}

