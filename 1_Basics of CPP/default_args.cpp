/*
    Default arguments in a function
    If no arguments are given to the function, the function will use the default values(if defined)
*/

#include<iostream>

using namespace std;

int func(int a=10, int b=20)
{
    cout << a << endl;
    cout << b << endl;
    return 0;
}

int main()
{
    // No args passed
    cout << "No arguments have been given." << endl;
    func();
    
    cout << endl;

    // Arbitrary args passed
    cout << "Arbitrary arguments have been given." << endl;
    func(11, 12);
    
}