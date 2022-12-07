#include<iostream>

using namespace std;

void make_pos(int &a){
    if (a < 0) {
        a = -a;
    }
}

int main(){
    int b = 10;
    int c = -20;

    make_pos(b);
    make_pos(c);

    cout << b << endl;
    cout << c << endl;

    return 0;

}