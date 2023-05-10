#include<iostream>

using namespace std;

int fact(int n){
    if (n == 0)
        return 1;
    return n * fact(n-1);
}

int main(){
    int n, r;
    int p;

    cout << "n: ";
    cin >> n;

    cout << "r: ";
    cin >> r;

    p = fact(n) / fact(n-r);

    cout << n << "P" << r << " = " << p << endl;

    return 0;
}