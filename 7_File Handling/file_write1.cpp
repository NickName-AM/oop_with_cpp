#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream outf;
    string a = "Hello, it's me";
    outf.open("test.txt", ios::out);
    for (int i=0; i<9; ++i)
        outf.put(a[i]);

    outf.close();
    return 0;
}