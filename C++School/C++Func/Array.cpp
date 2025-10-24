//heap=free memory
//for arrays - static memory alocation
#include <iostream>
using namespace std;

int main(){
    //array
    double nums[100];

    //matrix([colums & rows])
    int matrix[3][4];
    for(int i=0; i<3; i++) {
        for (int j=0; j<4; j++){
            cin >> matrix[i][j];
        }
    }
}