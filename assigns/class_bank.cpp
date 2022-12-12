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
    }
}

void Bank::displayInfo(){
    cout << "Name: " << customerName << endl;
    cout << "Remaning Balance: " << balanceAmount << endl;
}

void Bank::withdraw(double amt){
    if ((balanceAmount >= amt) && (amt > 0)){
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

void options(){
    cout << "1 info" << endl;
    cout << "2 withdraw" << endl;
    cout << "3 deposit" << endl;
    cout << "4 help" << endl;
    cout << "q quit" << endl;
}

int main(){
    Bank myMan("Mario", 12345);
    myMan.displayInfo();
    myMan.withdraw(100);
    myMan.deposit(100);


}