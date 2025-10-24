#include <iostream>
using namespace std;

int main(){

    int smallest, int1, int2, int3;
    cout << "Input three different integers\n";
    cin >> int1 >> int2 >> int3;

    if (int1<=int2 && int1<=int3){
        smallest=int1;
    }
    else if (int2<=int1 && int2<=int3){
        smallest=int2;
    }
    else if (int3<=int2 && int3<=int1){
        smallest=int3;
    }

    cout << "\n\n";
    cout << smallest << endl;
    return 0;

}