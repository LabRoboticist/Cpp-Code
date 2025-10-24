
        
        //Write a program to compute the volume of a cone 
        //V=1/3*PI*r cubed * height


#include<iostream>
using namespace std;

int main(){
        
    const double PI = 3.14159;
	double volume_of_cone;
	int radius,height;
    

    cout << "cone volume calculator\n";
    cout << "what is the height\n";
    cin >> height;
    cout << "what is the radius\n";
    cin >> radius;

    int radius_squared = radius*radius;

    volume_of_cone = PI * radius_squared * (height/3);
    cout << "voulme of cone: " << volume_of_cone << endl;
        
	return 0;
}