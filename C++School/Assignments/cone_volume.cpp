
        
        //Write a program to compute the volume of a cone 
        //V=1/3*PI*r cubed * height


#include<iostream>
using namespace std;

int main(){
        
    const double PI = 3.14159;
	double volume_of_cone;
	int r,h;

    cout << "height: ";
    cin >> h;
    cout << "radius: ";
    cin >> r;

    int r_squared = r*r;

    volume_of_cone = PI * r_squared * (h/3);
    cout << "voulme of cone: " << volume_of_cone << endl;
        
	return 0;
}