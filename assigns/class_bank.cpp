/*
class - Bank
- customerName   string
- balanceAmount  double

+ displayinfo()     void
+ withdraw(double)  void
+ deposit           void
*/
#include<iostream>

using namespace std;

class Bank{
    string customerName;
    double balanceAmount;

public:
    Bank(string name, double initialAmt);
    void displayInfo();
    void withdraw(double);
    void deposit(double);
};

Bank::Bank(string name, double initialAmt){
    customerName = name;
    if (initialAmt > 0) {
        balanceAmount = initialAmt;
    }else{
        cout << "[-] Error while creating the object." << endl;
        exit(-1);
    }
}

void Bank::displayInfo(){
    cout << "Name: " << customerName << endl;
    cout << "Remaning Balance: " << balanceAmount << endl;
}

void Bank::withdraw(double amt){
    if (balanceAmount > amt){
        balanceAmount -= amt;
        cout << "[+] " << amt << " retrieved." << endl;    
    }else{
        cout << "[-] Couldnot retrieve the given amount." << endl;
    }
    cout << "Remaining Balance: " << balanceAmount << endl;
}

void Bank::deposit(double amt){
    if (amt > 0){
        balanceAmount += amt;
        cout << "[+] " << amt << " deposited." << endl;
    }else{
        cout << "[-] Couldnot deposit the given amount." << endl;
    }
    cout << "Remaining Balance: " << balanceAmount << endl; 
}

int main(){
    Bank myMan("Mario", 12345);
    myMan.displayInfo();
    myMan.withdraw(100);
    myMan.deposit(100);
}