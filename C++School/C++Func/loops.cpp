#include <iostream>
using namespace std;

int i;

void floop(){ // for loop

    for (i=1;i<20;i++){
        cout << "*";
    }

}

void wloop(){ // while loop

    while(i<=20){
        cout << '*';
        i++;
    }

}

void dloop(){ //do loop

    int lives=0;
    bool goAgain=true;

    do(
        if(lives<=0){
            goAgain=false;
        }
    )
}

int main(){

    wloop();
    cout << endl;
    cout << i << endl; //21
    return 0;

}


//page 224 problem 56




//do, while, for loops
//flag down = false
