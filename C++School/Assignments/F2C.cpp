#include<iostream>
using namespace std;

int main(){

    double C;
    double F;

    char c_or_f;
 

    cout << "tempurature calculator\n";
    cout << "put in c(celsius input) or f(fahrenheit input) ";
    cin >> c_or_f;
    
    if (c_or_f == 'c'){
        cout << "Type in the value of celsius in degrees. ";
        cin >> C;
        F = C * (9.0/5) + 32;
        cout << "Your value in celsius to fahrenheit is" << F << endl;
    }
    else if(c_or_f == 'f'){
        cout << "Type in the value of fahrenheit in degrees. ";
        cin >> F;
        C = (F-32)*(5.0/9);
        cout << "Your value in fahrenheit to celsius is. " << C << endl;
    }

	return 0;
}