#include <iostream>
using namespace std;

int main(){

    int num1 = 9;

    if (num1==10){
        num1*=num1;
    }
    else if(num1==9){
        cout << "Read a new value for num1: ";
        cin >> num1;
    }
    else if (num1==2 || num1==3){
        cout << num1 * 99 << endl;
    }

    return 0;
}