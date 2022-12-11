#include <iostream>
using namespace std;

class Box
{
	double l;
	double b;
	double h;

public:
    // Setting the dimensions of the box
    void setLength(double l);
    void setBreadth(double b);
    void setHeight(double h);

    // Getting the dimesions of the box
    double getLength();
    double getBreadth();
    double getHeight();
    double getArea();
    double getVolume();
    
};

// '::' is the scope-resolution-operator
void Box::setLength(double le){
    l = le;
}

void Box::setBreadth(double br){
    b = br;
}

void Box::setHeight(double he){
    h = he;
}

double Box::getLength(){
    return l;
}

double Box::getBreadth(){
    return b;
}

double Box::getHeight(){
    return h;
}

double Box::getArea(){
	return 2 * ( l * b + b * h + l * h );	
}

double Box::getVolume(){
    return l * b * h;
}

int main()
{
	Box myBox;
	
    myBox.setLength(2);
    myBox.setBreadth(3);
    myBox.setHeight(4);

    cout << "Length: " << myBox.getLength() << endl;
    cout << "Breadth: " << myBox.getBreadth() << endl;
    cout << "Height: " << myBox.getHeight() << endl;
    cout << "Area: " << myBox.getArea() << endl;
    cout << "Volume: " << myBox.getVolume() << endl;
	return 0;
}