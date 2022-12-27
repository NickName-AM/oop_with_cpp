#include <iostream>
using namespace std;

class Box
{
	double l;
	double b;
	double h;

public:
    // Constructor
    Box(double le, double br, double he){
        l = le;
        b = br;
        h = he;
    }
    
    double getArea();
    double getVolume();
    
};

double Box::getArea(){
	return 2 * ( l * b + b * h + l * h );	
}

double Box::getVolume(){
    return l * b * h;
}


int main()
{
	Box myBox(2,3,4);
    cout << myBox.getArea() << endl;
    cout << myBox.getVolume() << endl;
}