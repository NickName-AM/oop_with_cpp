#include <iostream>
using namespace std;

class shape
{
	public: // Making the objects public as it is private by default
	double length;
	double breadth;
	double area()
	{
		return (length*breadth);
	}
};

int main()
{
	shape obj; //Object is created.
	obj.length = 5;
	obj.breadth = 10;
	cout << "Length= " << obj.length << endl;
	cout << "Breadth= " << obj.breadth << endl;
	cout << "Area= " << obj.area() << endl;
	return 0;
}