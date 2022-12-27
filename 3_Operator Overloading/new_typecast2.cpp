#include<iostream>

using namespace std;

class Weight{
    float kg;
    public:
        Weight(float k): kg(k){}
        
        operator int(){
            int g;
            g = int(kg*1000);
            return g;
        }
};

int main(){
    Weight a = 102.1;

    int gm = int(a);

    cout << gm << endl;
}