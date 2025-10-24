#include <iostream>
#include <cmath>
using namespace std;

//taylor series

double calculateE() {
    double e = 1.0;        // Start with the first term (n=0)
    double term = 1.0;     // start with the first term
    int n = 1;             // Start first divider of term
    while (true) {
        term /= n;         // Calculate 1/n! (previous term divided by n)
        double newe = e + term; // New approximation of e
        
        if (fabs(newe - e) < 0.0000001) { //fabs is absolute value of a double //loops ten times
            break; // stop the loop
        }
        
        e = newe; 
        n++; // Increment n for the next term
    }

    return e; // makes the the function calculateE (already a double) into variable e
}

int main() {
    double eApprox = calculateE();
    cout << "Approximation of e: " << eApprox << endl;
    return 0;
}