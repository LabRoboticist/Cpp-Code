#include <iostream>
using namespace std;

int main(){

    double decDeg, decimal;
    int degrees,minutes, seconds;

    cout << "\n\nPlease enter your angle in decimal degrees: ";
    cin >> decDeg; //35.54247
    degrees = decDeg; //35
    decimal=decDeg-degrees; //.54247
    decimal*=60; // 32.5482
    minutes = decimal; 
    decimal = decimal - minutes;//.5482
    decimal *= 60;//32.892
    seconds = decimal;//32

    cout << "Your answer in degrees, minutes, and seconds: ";
    cout << degrees << "°" << minutes << "\'" << seconds << "\'\'" << endl; 

    return 0;
}


//cout << "\'f" << "\n"; // 'f //quote displayed with a string
