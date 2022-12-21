/*
Class variables
- Same for every object
*/

#include<iostream>

using namespace std;

class test{
public:
    static int i;
    test(){
        cout << "H" << endl;
        i++;
    }

    static int getCount(){
        return i;
    }
};

int main(){
    test o1;
    test o2;
    test o3;
    cout << "Total: " << test::i << endl;
    return 0;
}