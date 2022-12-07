#include<iostream>

using namespace std;

inline bool is_pos(int a){
    return a>0?true:false;
}

int main()
{
    cout << is_pos(-1) << endl;
}