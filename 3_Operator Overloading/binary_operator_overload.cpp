#include<iostream>

using namespace std;

class Complex{
    double real;
    double img;

    public:
        Complex();
        Complex(double, double);
        void showValue();
        Complex operator +(const Complex &);
};

Complex::Complex(){
    real = 0;
    img = 0;
}

Complex::Complex(double r, double i){
    real = r;
    img = i;
}

void Complex::showValue(){
    string op = "+";
    if (img < 0)
        op = "";
    cout << real << op << img << "i" << endl;
}

Complex Complex::operator +(const Complex &ob){
    Complex myOb(real+ob.real, img+ob.img);

    return myOb;
}



int main(){
    Complex a(1,2), b(3,-4), c;
    a.showValue();
    b.showValue();

    cout << "Adding" << endl;
    c = a + b;
    c.showValue();

    return 0;
}