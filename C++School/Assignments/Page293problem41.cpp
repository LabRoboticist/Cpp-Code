#include <iostream>
using namespace std;

//problem 31.a

int main(){

    int rows =5; // number of rows
    for (int y=1; y <= rows; ++y) { //goes through each row individually
        for(int x=1; x<=2*y-1; ++x){ //length of row // start at 1// each length is increasing by 2
            cout << "*";
        }

    cout << endl; 
    }

    return 0;
}