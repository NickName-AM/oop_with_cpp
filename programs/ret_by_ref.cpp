/*
Return By Reference
    - Returns a ref to a var
    - The var should be global variable
*/

#include<iostream>

using namespace std;

// Global Variable
int a;

int &test()
{
    return a;
}

int main()
{
    test() = 10;

    cout << a << endl;
}