#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    cout << 10 << endl;
    cout << "In dec: " << dec << 10 << endl;
    cout << "In hex: " << hex << 10 << endl;
    cout << "In oct: " << oct << 10 << endl << endl;
    

    cout << setw(10) << "Hello" << endl;
    cout << uppercase << "hello" << endl;

    return 0;
}