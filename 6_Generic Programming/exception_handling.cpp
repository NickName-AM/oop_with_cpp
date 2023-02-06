#include<iostream>

using namespace std;

int main(){
    int a[] = {1,2,3,4};
    int s = sizeof(a)/sizeof(int);
    int pos;
    cout << "Enter Index: ";
    cin >> pos;
    try{
        if (pos<s) cout << a[pos] << endl;
        else throw 404;
    }catch(int err){ // Or catch(...)
        cout << "Out of Index: " << err << endl;
    }
    

    cout << "Hello" << endl;
    return 0;
}