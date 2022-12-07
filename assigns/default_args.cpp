
#include<iostream>

using namespace std;

int add(int a, int b=1)
{
    return (a+b);
}

int main(){
    int s;
    s = add(10, 20);
    cout << s << endl;

    s = add(10);
    cout << s << endl;
}