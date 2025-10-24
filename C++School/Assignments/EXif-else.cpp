#include <iostream>
using namespace std;

string variable;

int main(){
    cout << "put in your grade number";
    double grade;
    cin >> grade;
    char lgrade;

    if (grade>=90){
        lgrade='A';
    }
    else{
        if(grade>=80){
            lgrade='B';
        }
        else{
            if(grade>=70){
                lgrade='C';
            }
            else lgrade='D';
        }
    }

    return 0;
}

//if, if else, else clause


// emilia willias 


// go to miss many 
//problem(35-38) page 221