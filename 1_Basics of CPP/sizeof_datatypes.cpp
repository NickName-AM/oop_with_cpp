#include <iostream>

using namespace std;

int main () {
    int myInt;
    char myChar;
    float myFloat;
    double myDouble;
    short int myShortInt;
    long int myLongInt;
    long double myLongDouble;

    cout << "Size of int " << sizeof(myInt) << endl;
    cout << "Size of char " << sizeof(myChar) << endl;
    cout << "Size of float " << sizeof(myFloat) << endl;
    cout << "Size of double " << sizeof(myDouble) << endl;
    cout << "Size of short int " << sizeof(myShortInt) << endl;
    cout << "Size of long int " << sizeof(myLongInt) << endl;
    cout << "Size of long double " << sizeof(myLongDouble) << endl;



    return 0;
}