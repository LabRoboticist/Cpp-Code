#include <iostream>
using namespace std;


char vechicaltype;
int charge;
double hours;

void parkingCharge(){
    switch (vechicaltype){
        case 'c':
        case 'C':
            charge=hours*2;
            break;
        case 'b':
        case 'B':
            charge=hours*3;
            break;
        case 't':
        case 'T':
            charge=hours*4;
            break;
    }

}


int main(){
    cout << "Type in c for car, b for bus, or t for truck. ";
    cin >> vechicaltype;
    cout << "\nType in hours spent in parking lot. ";
    cin >> hours;
    cout << "\n";
    parkingCharge();
    cout << "\nYour Charge is $" << charge << endl;

    return 0;
}