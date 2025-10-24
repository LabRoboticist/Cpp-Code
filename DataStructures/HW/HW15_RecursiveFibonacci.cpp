#include <iostream>
using namespace std;

// Recursive function to return  Fibonacci sequence
int Fibonacci(int n){
    if(n==0) return 0;           // starting point (for computer people)
    if(n==1) return 1;           
    return (Fibonacci(n - 1) + Fibonacci(n - 2));  // Recursive part of the function
}

int main(){
    cout << "First 15 terms of the Fibonacci sequence are... \n";
    for(int i = 0; i < 15; ++i) cout << Fibonacci(i) << " ";
    cout << endl;
    return 0;
}

