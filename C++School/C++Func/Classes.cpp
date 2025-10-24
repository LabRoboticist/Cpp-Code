#include<iostream>
using namespace std;

//objects
class Rectangle{
	
	private:
		double length;
		double width;
	public:
		//constructor function
		Rectangle(); 
		
		//facilitator functions --- return the values of the attributes
		double getLength();
		double getWidth();

		//mutator functions ---change values of attributes
		void setLength(double l);
		void setWidth(double w);
	    
		//utility functions
	    double area();
	    double perimeter();
};


Rectangle::Rectangle(){
	length=width=0;
}


void Rectangle::setWidth(double w){
	width=w;
}


double Rectangle::getLength(){
	return length;
}


double Rectangle::area()
{
	return length*width;
}




//function declarations

int main(){
    double w;
	cin>>w;	
	Rectangle r; //r is an instance of class Rectangle and this statement is called the instantiation of class Rectangle
	r.setLength(3.4);
	r.setWidth(w);
	cout<<r.area()<<endl;
	return 0;
}


//define the member functions that have not been defined yet and invoke them from main for
//the instance r

