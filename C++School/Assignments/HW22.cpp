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
	nr/=g;
	dr/=g;
	
}

void Fraction::setDr(int d){dr=d;}
void Fraction::setNr(int n){nr=n;}

int Fraction::getDr(){return dr;}
int Fraction::getNr(){return nr;}

Fraction add(Fraction &f1, Fraction &f2){
	int n,d;
	n=(f1.getNr()*f2.getDr())+(f2.getNr()*f1.getDr());
	d=(f1.getDr()*f2.getDr());
	Fraction f3(n,d);
	f3.simplify();
	return f3;
}

Fraction sub(Fraction &f1, Fraction &f2){
	int n,d;
	n=(f1.getNr()*f2.getDr())-(f2.getNr()*f1.getDr());
	d=(f1.getDr()*f2.getDr());
	Fraction f3(n,d);
	f3.simplify();
	return f3;
}

Fraction multiply(Fraction &f1, Fraction &f2){
	int n,d;
	n=(f1.getNr()*f2.getNr());
	d=(f1.getDr()*f2.getDr());
	Fraction f3(n,d);
	f3.simplify();
	return f3;
}

Fraction divide(Fraction &f1, Fraction &f2){
	int n,d;
	n=(f1.getNr()*f2.getDr());
	d=(f1.getDr()*f2.getNr());
	Fraction f3(n,d);
	f3.simplify();
	return f3;
}

char showMenu(){	
	//choice ui
	char choice;
	cout << "TYpe the character for the equaction\n";
	cout << "+)\n" << "-)\n" << "*)\n" << "/)\n";
	cin >> choice;
	return choice;
}

void handleChoice(char choice, Fraction &f1, Fraction &f2){
	Fraction f;
	switch (choice){
		case '+':
			f=add(f1,f2);
			cout << "f1 + f2 = " << f.getNr() << "/" << f.getDr() << "\n"; 
			break;
		case '-':
			f=sub(f1,f2);
			cout << "f1 - f2 = " << f.getNr() << "/" << f.getDr() << "\n"; 
			break;
		case '*':
			f=multiply(f1,f2);
			cout << "f1 * f2 = " << f.getNr() << "/" << f.getDr() << "\n"; 
			break;
		case '/':
			f=divide(f1,f2);
			cout << "f1 / f2 = " << f.getNr() << "/" << f.getDr() << "\n"; 
			break;

	}
}


int main(){
	int n, d;
	cout << "Type in numenator then denominator for fraction 1.\n";
	cin >> n; 
	cin >> d;
	Fraction f1(n,d);
	Fraction f2(9,8);
	Fraction f3(f1.getNr(), f1.getDr());
	char choice = showMenu();
	handleChoice(choice, f1, f2);
	return 0;
}
