#include <iostream>
using namespace std;

int main(){

    double angle;

    cout << "Degrees to Radians\n\n";
    cout << "Input Degrees. ";
    cin >> angle;

    angle/=57.295779;

    cout << "Your input in radians is... " << angle << " radians"<< endl;  
 

    return 0;
}