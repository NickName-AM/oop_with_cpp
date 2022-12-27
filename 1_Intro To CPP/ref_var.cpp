#include <iostream>

using namespace std;

int main () {
    int a = 10;
    int &ref = a;
    cout << a << endl;
    cout << ref << endl; 

    // ref points to a
    return 0;
}