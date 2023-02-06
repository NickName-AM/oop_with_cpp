#include<iostream>

using namespace std;

int main(){
    int a=10,b=0;
    try{
        if (b==0) throw 404;
        else cout << a / b << endl;
    }catch(...){
        cout << "Cannot divide by " << b << endl;
    }

    cout << "Hello" << endl;
    return 0;
}