#include <iostream>
using namespace std;

struct Point {
	int x;
	int y;
};


void getPoints(Point p[]);
int main(){
	Point pts[MAX];
	getPoints(pts);
}

void getPoints(Point p[]){
	for(int i=0;i<MAX;i++){
		cin>>p[i].x;
		cin>>p[i].y;
	}
}


class Complex{
	private:
		int real;
		int imag;
	public:
		Complex();
		Complex(int r, int img);
		Complex(Complex &c);
		void setReal(int r);
		void setImag(int img);
		int getReal();
		int getImag();
			
		
		
};



int Complex::getReal(){return real;}
int Complex::getImag(){return imag;}

//Practice for final with this program


Complex operator*(Complex c1, Complex c2){
	int r,i;
	r=(c1.getReal()*c2.getReal());
	i=(f1.getDr()*f2.getDr());
    Complex c3(r,i);
	//f3.simplify();
	return c3;
}

int main(){
	Complex c1,c2,c3;
	//menu
	//handleChoice
	//loop it until user wants to stop 
	cin>>c1;
	cin>>c2;
	c3=c1+c2;
	cout<<c3;
	c3=c1*c2;
	return 0;
}