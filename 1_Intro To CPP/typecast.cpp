#include <iostream>

using namespace std;

int main () {
    int myInt = 10;

    // Implicit Typecasting
    float myIntFloat = myInt;
    cout << myIntFloat << endl;

    float myFloat = 1023.223;
    
    // Explicit Typecasting
    int MyFloatInt = int(myFloat); // or (int) myFloat
    cout << MyFloatInt << endl;

    int myNewFloatInt = static_cast<int>(myFloat); 
    cout << myNewFloatInt << endl;

    return 0;
}