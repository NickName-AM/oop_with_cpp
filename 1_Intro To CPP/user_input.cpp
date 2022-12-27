#include <iostream>

using namespace std;

int main () {
    int myInt;
    cout << "Gimme a number: ";
    // >> : Extractor operator
    // Extract from input buffer and store it in something
    cin >> myInt;
    
    cout << "Is your number " << myInt << "?" << endl;

    return 0;
}