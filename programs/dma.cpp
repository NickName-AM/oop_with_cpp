#include <iostream>

using namespace std;

int main () {
    // Using heap segment for data storage

    // Allocating certain bytes
    int *iptr = new int(10);     // 10: value to store in mem; int: size of mem; total size: 4 bytes

    int *iaptr = new(nothrow) int[5];    // 5: size of int arr; total size: 5 x 4 = 20 bytes
    // If there is not enough space, nothrow prevents the program from crashing
    // and iaptr will store NULL
    if (iaptr == NULL) {
        cout << "Not enough space to allocate given space" << endl;
        exit(1);
    }

    cout << "iptr : " << *iptr << endl;

    for (int i=0; i<5; ++i) {
        cin >> *(iaptr + i);
    }
    cout << "aiptr : " << endl;

    for (int i=0; i<5; ++i) {
        cout << *(iaptr + i) << endl;
    }
    delete iptr;
    delete iaptr;

    return 0;
}