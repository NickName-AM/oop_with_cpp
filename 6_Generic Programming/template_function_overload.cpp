#include<iostream>

using namespace std;

template <class A, class B> void display(A a, B b){
    cout << "a: " << a << "\t" << "b: " << b << endl;
}

template <class A> void display(A a){
    cout << "a: " << a << endl;
}

int main(){
    
    display(1,2.6);
    display(1);

    return 0;
}