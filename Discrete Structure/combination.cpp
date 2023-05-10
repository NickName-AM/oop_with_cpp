#include<iostream>

using namespace std;

int fact(int n){
    if (n == 0)
        return 1;
    return n * fact(n-1);
}

int main(){
    int n, r;
    int c;

    cout << "n: ";
    cin >> n;

    cout << "r: ";
    cin >> r;

    c = fact(n) / (fact(n-r) * fact(r) );

    cout << n << "C" << r << " = " << c << endl;

    return 0;
}