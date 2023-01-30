#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file;
    char b;
    file.open("../Tests/myFile.cpp", ios::in);
    if (!file){
        cout << "File didnot open." << endl;
    }else{
        cout << "Reading..." << endl;

        while (!file.eof()){
            file >> b;
            cout << b;
        }
        file.close();

    }


    return 0;
}