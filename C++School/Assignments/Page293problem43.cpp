#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int row, col;
char symbol='*';


void page293_1(){ //wrong

for (row=1; row>=1; row--){
    for (col=1; col<=row; col++){ 
        cout << symbol << setw(3);
    }
}
}

int main(){


return 0;
}