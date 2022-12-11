#include <iostream>

using namespace std;

class Box
{

	double l;
	double b;
	double h;
public:
	void setDimensions(double le, double br, double he){
		l = le;
		b = br;
		h = he;
	}
	
	void showDimensions()
	{
		cout << l << " x " << b << " x " << h << endl;
	}
	
	double area()
	{
		return 2 * ( l * b + b * h + l * h );
	}

	double volume()
	{
		return l * b * h;
	}

};


int main()
{
	Box myBox;
	
	myBox.setDimensions(1,2,3);
	myBox.showDimensions();

	cout << "\nArea: " << myBox.area() << endl;
	cout << "Volume: " << myBox.volume() << endl;

	return 0;
}