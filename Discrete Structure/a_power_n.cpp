#include<iostream>

using namespace std;

int pow(int a, int n){
    if ( n == 0 )
        return 1;
    return a * pow(a, n-1);
}

int main(){
    cout << "2 power 4: ";
    cout << pow(2, 4) << endl;
    return 0;
}