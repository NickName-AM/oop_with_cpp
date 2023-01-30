#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream file;
    string a;
    file.open("../Tests/myFile.cpp", ios::out);
    if (!file){
        cout << "File didnot open." << endl;
    }else{
        cout << "File created." << endl;

        file << "Hello, it's me" << endl;
        file << "I was wondering" << endl;
        file << "if after all these years, you'd like to meet." << endl;
        file << "To go over" << endl;
    }
    file.close();

    return 0;
}