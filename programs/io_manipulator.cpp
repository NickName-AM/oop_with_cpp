/*
    Manipulating Input/Output stream
    
    Output Manipulators:
        endl

*/

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    cout << hex << 10 << endl;
    cout << setbase(2) << 8 << endl;
    cout << setw(20) << "Hello" << endl;
}
