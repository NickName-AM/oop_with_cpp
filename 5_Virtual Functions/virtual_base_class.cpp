#include<iostream>

using namespace std;

class A{
    int a = 10;
    public:
    void showVal(){
        cout << a << endl;
    }
};

class B: public virtual A{
    int b = 11;
    public:

};
class C: public virtual A{
    int c = 12;
    public:

};

class D: public B, public C{
    public:
};

int main(){

    D d;
    d.showVal();
    
    return 0;
}