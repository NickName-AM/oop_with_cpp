#include<iostream>

using namespace std;

class Shape{
    int length;
    int breadth;
    public:
    Shape(int length, int breadth){
        this->length = length;
        this->breadth = breadth;
    }
    void show(){
        cout << "Length: " << this->length << endl;
        cout << "Breadth: " << this->breadth << endl;
    }

};

int main(){
    Shape s(10,2);

    s.show();
    return 0;
}