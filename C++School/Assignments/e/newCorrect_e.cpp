#include <iostream>
#include <iomanip> // for std::setprecision
#include <cmath>
using namespace std;

//taylor series

double calculateE() {
    double e = 1.0;        // Start with the first term (n=0)
    double term = 1.0;     // This will hold the value of 1/n! for the current term
    int n = 1;             // Start from the first term in the series (n=1)
    int i=0;

    while (true) {
        term /= n;         // Calculate 1/n! (previous term divided by n)
        double newe = e + term; // New approximation of e
        
        // Check if the difference is less than the specified tolerance
        if (fabs(newe - e) < 0.0000001) { //fabs absolute value of double //loop
            break; // stop the loop
        }
        
        e = newe; // Update e with the new approximation
        n++; // Increment n for the next term
        i++;

    }

    cout << i << "\n\n";
    return e; // makes the the function calculateE (already a double) into variable e
}

int main() {

    

    double eApprox = calculateE();
    cout << fixed << setprecision(8); // Set precision for output
    cout << "Approximation of e: " << eApprox << endl;
    return 0;
}
