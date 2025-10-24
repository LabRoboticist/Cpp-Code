#include <iostream>
#include <iomanip>

using namespace std;

int row, col;

void page293_1(){ //wrong

    for (row=1; row>=1; row--){
        for (col=1; col<=row; col++){ 
            cout << col << setw(3);
        }
    }

}

void page293_2(){ //wrong

    for (row=1; row<=6; row++){
        //for (col =1; col<=2*row=1; col++; ){
        //}
    }

}

//void 





int main(){



    return 0;
}