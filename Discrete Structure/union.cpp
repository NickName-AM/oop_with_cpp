#include<iostream>

using namespace std;

int main(){
    int seta_length;
    int setb_length;
    cout << "No. of elements in set A: ";
    cin >> seta_length;
    cout << "No. of elements in set B: ";
    cin >> setb_length;

    int seta[seta_length];
    int temp[setb_length];
    int setb[setb_length];
    
    int c,c1=0;
    int i,j;

    // Set A elements
    cout << "Set A" << endl;
    for(i=0; i<seta_length; ++i){
        cin >> seta[i];
    }
    // Temporary set elements (For checking duplicates against set A)
    cout << "Set B" << endl;
    for(i=0; i<setb_length; ++i){
        cin >> temp[i];
    }

    // Remove Duplicates and append to setb
    for(i=0; i<setb_length; ++i){
        c = 0;
        for(j=0; j<seta_length; ++j){
            if(temp[i] == seta[j]){
                c+=1;
            }
        }
        if(c == 0){
            setb[c1] = temp[i];
            c1++;
        }
    }

    // Union set
    int setc[seta_length + c1];
    for(i=0; i<seta_length; ++i){
        setc[i] = seta[i];
        setc[i+seta_length] = setb[i];
    }

    // Result
    cout << "Union: ";
    for(i=0; i<seta_length + c1; ++i){
        cout << setc[i] << " ";
    }
    cout << endl;


    return 0;

}