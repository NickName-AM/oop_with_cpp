#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream file;
    string a;
    file.open("../Tests/myFile.cpp", ios::app);
    if (!file){
        cout << "File didnot open." << endl;
    }else{
        cout << "File open" << endl;

        file << "I love NCIT, said XYZ." << endl;
    }
    file.close();

    return 0;
}