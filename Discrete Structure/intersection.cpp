#include<iostream>

using namespace std;

int main(){
    int seta_length, setb_length;
    cout << "No. of elements in set A: ";
    cin >> seta_length;
    cout << "No. of elements in set B: ";
    cin >> setb_length;

    int seta[seta_length], setb[setb_length];
    
    int i,j,c,c1=0;

    // Set A elements
    cout << "Set A" << endl;
    for(i=0; i<seta_length; ++i){
        cin >> seta[i];
    }
    // Temporary set elements (For checking duplicates against set A)
    cout << "Set B" << endl;
    for(i=0; i<setb_length; ++i){
        cin >> setb[i];
    }

    int setc[seta_length];
    for(i=0; i<seta_length; ++i){
        for(j=0; j<setb_length; ++j){
            if(seta[i] == setb[j]){
                setc[c1] = seta[i];
                c1++;
            }
        }
    }


    cout << endl << "Intersection: " << endl;
    for(i=0; i<c1; ++i){
        cout << setc[i] << " ";
    }
    cout << endl;

    return 0;
}