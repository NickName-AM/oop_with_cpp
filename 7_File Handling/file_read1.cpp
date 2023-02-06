#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream fd;
    string data;
    string data1;

    fd.open("../Project/idea", ios::in);
    if (!fd) {
        cout << "Couldnot Open File";
        exit(-1);
    }
    while(!fd.eof()){
        getline(fd, data);
    
        cout << data  << endl;

    }

    fd.close();
    return 0;
}