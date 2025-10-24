#include <iostream>
#include <cmath>
using namespace std;

//taylor series 

void calculateE() {
    
    long n = 100000000;   

    
    float e = pow(1.0+1.0/n, n);

    cout << "\nApproximation with n = 1000000 is " << e;

    
}



int main() {

    calculateE();

    return 0;
}

