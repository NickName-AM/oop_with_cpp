#include<iostream>

using namespace std;

class A{
    int x;
    public:
    A(){
        x = 10;
    }

    friend int getX(A);
};

int getX(A obj){
    obj.x = 11;
    return obj.x;
}

int main(){
    A a;

    cout << getX(a) << endl;
    return 0;
}