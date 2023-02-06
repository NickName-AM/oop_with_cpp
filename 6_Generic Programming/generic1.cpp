#include<iostream>

using namespace std;

template <class A, class B> B sum(A a, B b){
    return a + b;
}

int main(){
    
    cout << sum(1,2) << endl;
    return 0;
}