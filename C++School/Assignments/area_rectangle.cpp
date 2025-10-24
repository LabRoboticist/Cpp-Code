#include <iostream>
using namespace std;

double length, width, area;
    

int Area_Calc(){
    area = length * width;
    cout << "Your area is " << area << "\n";
    return 0;
} 


int main(){
   

    cout << " --- Area Calculator 4 rectangle --- " << "\n";
    cout << " input length ";
    cin >> length;
    cout << " input width ";
    cin >> width;

    Area_Calc();
    
    //cout << area;

}