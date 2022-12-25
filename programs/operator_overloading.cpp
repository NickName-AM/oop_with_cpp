#include<iostream>

using namespace std;

class Count{
    int value;
    
    public:
        Count(int); // Constructor
        ~Count();   // Destructor
        void operator ++();     // Pre
        void operator ++(int);  // Post
        int getValue();
};

Count::Count(int i):value(i){
    cout << "0bject created." << endl;
}

Count::~Count(){
    cout << "Object Destroyed" << endl;
}

void Count::operator ++(){
    ++value;
}

void Count::operator ++(int){
    value++;
}

int Count::getValue(){
    return value;
}

int main(){
    Count a(10);
    cout << a.getValue() << endl;
    a++;
    cout << a.getValue() << endl;  
    ++a;
    cout << a.getValue() << endl;

    return 0;
}