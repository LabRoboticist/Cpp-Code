#include <iostream>
using namespace std;

int main (){

    int seconds;
    int minutes;
    int hours;

    cout << "Time in seconds: " << endl;
    cin >> seconds;
    minutes = seconds/60;
    hours = minutes/60;
    

    cout << "\n" << hours << " : " << minutes << " : " << seconds;
    //cout << hours;

    return 0;
}