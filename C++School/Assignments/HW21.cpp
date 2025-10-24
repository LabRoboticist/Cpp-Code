#include<iostream>
using namespace std;

//objects
class Rectangle{
	
	private:
		double length;
		double width;
	public:
		Rectangle(); 
		double getLength();
		double getWidth();
		void setLength(double l);
		void setWidth(double w);
	    
	    double area();
	    
	    double perimeter();
};


Rectangle::Rectangle(){
	length=width=0;
}


void Rectangle::setWidth(double w){
	width=w;
}

void Rectangle::setLength(double l){ //done
	length=l;
}

double Rectangle::getWidth(){ //done
	return width;
}

double Rectangle::getLength(){
	return length;
}


double Rectangle::area()
{
	return length*width;
}


double Rectangle::perimeter() //done
{
	return (2*(length+width));
}


//function declarations

int main(){
    double w;
	cout << "Type in the number for w: ";
	cin>>w;	
	Rectangle r; 
	r.setLength(3.4);
	r.setWidth(w);
	cout<< "Area: " << r.area() << "\n" << "Perimeter: " << r.perimeter() <<endl;
	return 0;
}


//define the member functions that have not been defined yet and invoke them from main for
//the instance r

