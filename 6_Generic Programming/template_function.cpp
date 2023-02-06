// Generic Programming

#include<iostream>

using namespace std;

template <class ADD>ADD sum(ADD a, ADD b){
    ADD result;
    result = a + b;
    return result;
}


int main(){   
    cout << sum(4,5) << endl;
    cout << sum(4.1,5.4) << endl;
    cout << sum('A',char(1)) << endl;
    return 0;
}