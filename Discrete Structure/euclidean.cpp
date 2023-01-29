#include<iostream>

using namespace std;

int gcd(int a, int b){
    int t;
    while (b != 0){
        t=a;
        a = b;
        b = t% b;
    }
    return a;
}

int main(){
    cout << gcd(15, 26) << endl;
    cout << gcd(1914, 899) << endl;

    return 0;
}