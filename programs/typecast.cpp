#include <iostream>

using namespace std;

int main () {
    int myInt = 10;

    // Implicit Typecasting
    float myIntFloat = myInt;
    cout << myIntFloat << endl;

    float myFloat = 10.2;
    
    // Explicit Typecasting
    int MyFloatInt = int(myFloat); // or (int) myFloat 
    cout << MyFloatInt << endl;

    return 0;
}