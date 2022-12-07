// Swapping two values
#include<iostream>

using namespace std;

void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

int main()
{
    int a = 2;
    int b = 3;

    cout << "Before Swap" << endl << "a: " << a << endl << "b: " << b << endl;

    // Passing values to be swapped by reference
    swap(a, b);
    
    cout << "After Swap" << endl << "a: " << a << endl << "b: " << b << endl;
    
}