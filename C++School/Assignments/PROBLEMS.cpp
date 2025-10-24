#include <iostream>
using namespace std;

void Thirty5_6(){

    int best=0, score=95;

    if (score >= 90){
        best = 1;
        cout << "Score is greater than or equal to 90º.\n"; //conditional expresion
    }
    else cout << "Score is less than 90º.\n";
}

void Problems37_38_39_41(){

    int num=0, flag=1, a=2, b=2;
    float amount=1;
    

    if (amount > 5.4){
        num+=4;
    }
    
    if (flag){
        cout << "num: " << num << endl;
    }

    if (num==0){
        cout << "zero\n";
    }
    else cout << "not zer0\n";

    if(flag){
        cout << a+b << "\n";
        cout << (a+b)/2 << "\n";
    }

}

void Fourty1(){

    int dividen=9, divisor=6;
    double quotient;

    if (divisor != 0){
        quotient=dividen/divisor;
    }
    if (divisor == 0){
        divisor = quotient;
    }

    cout << "dividen: " << dividen << "\ndivisor: " << divisor << "\nquotient: " << quotient << endl; 

}


int main(){


    Fourty1();
    cout << "\n\n";
    Problems37_38_39_41();
    cout << "\n\n";
    Thirty5_6();

    return 0;

}
