#include <iostream>
using namespace std;

class Fraction{
	private:
		int nr;
		int dr;
   	public:
   		//default constr
   		Fraction();
   		Fraction(int n, int d);
   		Fraction(Fraction& f);
   		//setter functions - mutator functions
   		void setNr(int n);
   		void setDr(int d);
   		//getter functions
   		int getNr();
   		int getDr();
   		
		//non member function
		static Fraction add(Fraction& f1, Fraction& f2);
		static Fraction simplify(Fraction&f);

   		
};

//define all the member functions here
 //need to do

//default
Fraction::Fraction(){
	nr=0;
	dr=1;
}

Fraction::Fraction(int n, int d){
	nr=n;
	dr=d;
}
   		
Fraction::Fraction(Fraction& f){
	f.nr=nr;
	f.dr=dr;
}

Fraction Fraction::add(Fraction& f1, Fraction& f2){

	Fraction f3;

	if(f1.getDr() == f2.getDr()){
		f3.setNr(f1.getNr() + f2.getNr());
		f3.setDr(f1.getDr());
	}

	else{
		f3.setNr((f1.getNr() * f2.getDr()) + (f2.getNr() * f1.getDr()));
		f3.setDr(f2.getDr() * f1.getDr());
	}   

	return f3;
}
//write subtract multiply divide functions


//simplify and least common denominator
Fraction Fraction::simplify(Fraction&f){
	if ((f.getNr()/f.getDr()) > 0) {
	cout << "Able to be simplified\n";

	}
	else cout << "not simplifiable";
}


void Fraction::setDr(int d){dr=d;}
void Fraction::setNr(int n){nr=n;}

int Fraction::getDr(){return dr;}
int Fraction::getNr(){return nr;}


//cout<<2.0/3<<endl;

int main(){
	
	int d=0, n=0;

	Fraction f1;
	cout << "f1 Numerator "; cin >> n; 
	f1.setNr(n);
	cout << "f1 Denominator "; cin >> d; 
	f1.setDr(d);
	cout << "\n";
	cout << "f1 numerator: " << f1.getNr() << "\n"; 
	cout << "f1 denominator: " << f1.getDr() << "\n\n";

	//create f2 using the non-default constructor
	Fraction f2(6,9);
	cout << "f2 numerator: " << f2.getNr() << "\n";
	cout << "f2 denominator: " << f2.getDr() << "\n\n";

	//create f3 using the copy constructor;
	Fraction f3(f1.getNr(), f1.getDr());
	cout << "f3 numerator: " << f3.getNr() << "\n";
	cout << "f3 denominator: " << f3.getDr() << "\n\n";

	Fraction f4 = Fraction::add(f1,f2);
	cout << "f4 numerator: " << f4.getNr() << "\n";
	cout << "f4 denominator: " << f4.getDr() << "\n";

	return 0;
}
