#include<iostream>

using namespace std;

// Default value is 0
int level;

int &setlevel(){
    return level;
}

int main()
{
    cout << "Before:\n" << level << endl;

    setlevel() = 1;

    cout << "After:\n" << level << endl;

    setlevel() = 2;

    cout << "After again\]:\n" << level << endl;

    return 0;
}