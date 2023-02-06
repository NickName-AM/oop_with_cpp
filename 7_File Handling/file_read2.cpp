#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream infile;
    char a[10];
    infile.open("test.txt", ios::in);
    for (int i=0; i<9; ++i)
        infile.get(a[i]);
        cout << a;

    infile.close();
    return 0;
}