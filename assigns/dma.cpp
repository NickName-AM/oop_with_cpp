// Dynamic memory operators with new and delete operators

#include<iostream>

using namespace std;

int main()
{
    char *a = new(nothrow) char('b');
    if (a == NULL){
        cout << "CANNOT_ALLOCATE" << endl;
        exit(1);
    }
    cout << a << endl;
    delete(a);

    char *b = new char[5];
    if (b == NULL){
        cout << "CANNOT_ALLOCATE" << endl;
        exit(1);
    }
    *(b) = 'a';
    *(b+1) = 'b';
    *(b+2) = 'c';
    *(b+3) = 'd';
    *(b+4) = 'e';

    cout << b << endl;

    delete(b);

    return 0;
}