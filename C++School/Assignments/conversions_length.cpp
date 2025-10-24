#include <iostream>
using namespace std;

double value;
int choice;

int main(){

    cout << "\n\nInches Converter\n";
    cout << "Input in an Iches value. ";
    cin >> value;

    cout << "Type in the number shown to convert your value to that measurment.\n";
    cout << "1) feet\n";
    cout << "2) yard\n";
    cout << "3) centimaters\n";
    cout << "4) meters\n";
    cout << "\n";
    cin >> choice;
    cout << "\n\n";


    switch (choice){
        case 1:
            value/=12;
            cout << "1) " << value << " feet\n";
            break;
        case 2:
            value/=36;
            cout << "2) " << value << " yards\n";
            break;
        case 3:
            value*=2.54;
            cout << "3) " << value << " centimeters\n";
            break;
        case 4:
            value/=39.37;
            cout << "4) " << value << " meters\n";
            break;
    }
    
    return 0;
}