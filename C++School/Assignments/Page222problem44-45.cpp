#include <iostream>
using namespace std;

int num1;

void p44(){

    if(num1==10){
        num1*=num1;
    }
    else if(num1==9){
        cin >> num1;
    }
    else if(num1==2 || num1==3){
        num1*=99;
        cout << num1 << endl;
    }

}

void p45(){

    switch(num1){
        case 2:
        case 3:
            num1*=99;
            cout << num1 << endl;
            break;
        case 10:
            num1*=num1;
            break;
        case 9:
            cin >> num1;
            break;
    }

}


int main(){

    cout << "Type in 10, 9, 2, or 3. ";
    cin >> num1;
    //p44() //problem 44
    p45(); //problem 45

    return 0;
}