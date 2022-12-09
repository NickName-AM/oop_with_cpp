#include <iostream>
using namespace std;

class box
{
public:
	double length;
	double breadth;
	double height;
	double getArea()
	{
		return (2*(length*breadth+breadth*height+length*height));
	}

	double getVolume()
	{
		return (length*breadth*height);
	}

	void displayDim()
	{
		cout << length << "*" << breadth << "*" << height << endl;
	}
};


int main()
{
	box obj;
	cout << "Enter the length of the box: " ;
	cin >> obj.length;
	cout << "Enter the breadth of the box: " ;
	cin >> obj.breadth;
	cout << "Enter the height of the box: " ;
	cin >> obj.height;

	cout << "Dimensions:";
	obj.displayDim();

	cout << "\nArea: " << obj.getArea() << endl;
	cout << "Volume: " << obj.getVolume() << endl;

	return 0;
}