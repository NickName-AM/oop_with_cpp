#include <iostream>

using namespace std;

// Only write one line of code inside this
inline int max(int a, int b)
{
    return a>b?a:b;
    // is a > b? if true, return a else return b
}

int main () {
    cout << max(10,20) << endl;
    return 0;
}