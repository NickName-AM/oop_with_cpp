#include <iostream>

using namespace std;

float add(float a, float b) {
    return a + b;
}

float add(float a, float b, float c) {
    return a + b + c;
}

int main () {

    float add_2 = add(1,2);
    float add_3 = add(1,2);

    cout << add_2 << endl;
    cout << add_3 << endl;

    return 0;
}