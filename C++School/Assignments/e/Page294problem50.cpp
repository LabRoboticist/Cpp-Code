#include <iostream>
using namespace std;


///////////
///WRONG///
//////////


int main(){

    int n, nato, product=1;
    double diff, e1, e2, term, factorial;
    bool stop;


    cout << "Input n: ";
    cin >> n;

    //factorial of n
    for(int i=n; i>=1; i--){ //compute factorial of a number
        product *= i;
    } //product = factorial = !

    
    do{
        for(int i=n;i>=1; i--){
            product*=1;
        }
        factorial=product;
        term=1.0/factorial;
        e2=e1+term;
        diff=e2-e1;
        if(diff<0.0000001){
            stop=true; 
        }
        else {
            e1=e2;
        }

    } while(!stop); 
    

    return 0;
}