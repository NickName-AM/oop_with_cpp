// Function Overload
#include<iostream>

using namespace std;

int increment(int a, int by){
    return (a+by);
}

int increment(int a){
    return (a+1);
}

int main(){
    int b = increment(10, 20);
    int c = increment(10);

    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
}