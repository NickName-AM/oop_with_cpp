#include<iostream>
using namespace std;


class Base{
    public:
    int x;
    int y;
};

class Child: public Base{
    public:
    void print(){
        cout << x << y << endl;
    }
};

int main(){
    Child c;
    c.print();

    return 0;
}

