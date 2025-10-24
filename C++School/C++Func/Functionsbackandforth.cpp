#include <iostream>
using namespace std;

//static memorry allocation in function
//refrence pareameters 
void getdata(int &num1, double &num2); //&=address

int main(){

    int x; double y;
    getdata(x,y);
    cout << x << y << endl;

    return 0;
}

void getdata(int&num1, double&num2){
    cin >> num1 >> num2;
}