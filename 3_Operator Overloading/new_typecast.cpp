#include<iostream>

using namespace std;

class Distance{
    int centimeter;
    float meter;
    public:
        Distance():meter(0),centimeter(0){}
        Distance(float cm):centimeter(cm){
            meter = static_cast<float>(centimeter)/100;
        }
        void displayValues(){
            cout << "cm: " << centimeter << endl;
            cout << "m: " << meter << endl;
        }
};

int main(){
    Distance a = 101;

    a.displayValues();
}