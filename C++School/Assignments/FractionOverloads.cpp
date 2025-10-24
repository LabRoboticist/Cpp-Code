#include<iostream>
using namespace std;

class Fraction{
	private:
		int nr;
		int dr;
   	public:
   		//default constr
   		Fraction();
   		Fraction(int n, int d);
   		Fraction(Fraction &f);
   		//setter functions - mutator functions
   		void setNr(int n);
   		void setDr(int d);
   		//getter functions
   		int getNr();
   		int getDr();
   		int gcf();
   		void simplify();
   		
};

//define all the member functions here

int Fraction::gcf()
{   
    int cf,smallest;
    if(nr==dr){
    	cf=nr;
	}
	else 
		if(nr<dr){
			smallest=nr;
		}
		else dr=smallest;
	for(int i=1;i<=smallest;i++){
		if(nr%i==0 && dr%i==0){
			cf=i;
		}
	}
	return cf;
}
void Fraction::simplify()
{
	int g=gcf();
	nr=nr/g;
	dr/=g;
	
}
//Fraction add(Fraction f1, Fraction f2);
Fraction operator+(Fraction f1, Fraction f2){
	int n,d;
	n=f1.getNr()*f2.getDr()+f2.getNr()*f1.getDr();
	d=f1.getDr()*f2.getDr();
	Fraction f3(n,d);
	f3.simplify();
	//f3=add(f1,f2);
	return f3;
}


Fraction operator*(Fraction f1, Fraction f2){
	int n,d;
	n=(f1.getNr()*f2.getNr());
	d=(f1.getDr()*f2.getDr());
	Fraction f3(n,d);
	f3.simplify();
	return f3;
}

Fraction operator/(Fraction f1, Fraction f2){
	int n,d;
	n=(f1.getNr()*f2.getDr());
	d=(f1.getDr()*f2.getNr());
	Fraction f3(n,d);
	f3.simplify();
	return f3;
}

istream& operator>>(istream &is, Fraction &f){
	char symbol;
	int n,d;
    is>>n>>symbol>>d;
	f.setNr(n);
	f.setDr(d);
	return is;
}


ostream& operator<<(ostream &os, Fraction f){ //& //check
    os<<f.getNr()<<"/"<<f.getDr();
	return os;
}



Fraction operator-(Fraction f1, Fraction f2){
	int n,d;
	n=f1.getNr()*f2.getDr()-f2.getNr()*f1.getDr();
	d=f1.getDr()*f2.getDr();
	Fraction f3(n,d);
	f3.simplify();
	return f3;
}



//cout<<2.0/3<<endl;

int main(){
	
	Fraction f1;
	//create f2 using the non-default constructor
	//create f3 using the copy constructor;
	Fraction f2,f3;
	//f3=add(f1,f2);
	
	cin>>f1;
	cin>>f2;
	
	f3=f1+f2;
	//showMenu
	//handleChoice
	//output of f3 
	
	cout<<f3<<endl;
	return 0;
}



Fraction add(Fraction f1, Fraction f2){
	//Fraction f3;
	int n,d;
	n=f1.getNr()*f2.getDr()+f2.getNr()*f1.getDr();
	d=f1.getDr()*f2.getDr();
	Fraction f3(n,d);
	f3.simplify();
	f3=add(f1,f2);
	return f3;
}
