#include <iostream>
#include <cstring>
using namespace std;

const int SIZE=50;
struct Address{
	int house_number;
	//apartment?
	string street_name;
	string city;
	string state;
	int zipcode;
};

struct TelNum{
	int countryCode;
	int areaCode;
	int firstThree;
	int lastFour;
};
class PhoneBook{
	private:
		//last name 
		char l_name[SIZE];
		char f_name[SIZE];
		//first name
		//tel number
		TelNum num;
		//address
		Address add;
		//int length;
	public:
		//constructors
		PhoneBook();
		void setLastName(char name[]);
		void setFirstName(char name[]);
		void setNum(TelNum number);
		void setAddress(Address a);
		char* getLastName();
		char* getFirstName();
		TelNum getTelNum();
		Address getAddress();
		
		
};

PhoneBook::PhoneBook()
{
		num.areaCode=0;
		num.countryCode=0;
		num.firstThree=0;
		num.lastFour=0;

		add.city="";
		add.house_number=0;
		add.state="";
		add.street_name="";
		add.zipcode=0;

		//give default values to private members
}
void PhoneBook::setLastName(char name[]){
	strcpy(l_name,name);
	//length=strlen(name);
}
char* PhoneBook::getLastName(){
	return l_name;
}

void PhoneBook::setFirstName(char name[]){
	strcpy(f_name,name);
	//length=strlen(name);
}
char* PhoneBook::getFirstName(){
	return f_name;
}

istream& operator >> (istream &is, TelNum &TN){
	int cC,aC,fT,lF;
	cout << "countryCode, areaCode, firstThree, lastFour";
	cin>>cC>>aC>>fT>>lF;
	TN.countryCode=cC;
	TN.areaCode=aC;
	TN.firstThree=fT;
	TN.lastFour=lF;
}
void PhoneBook::setNum(TelNum number){
	//num=number;	
	num.countryCode=number.countryCode;
	num.areaCode=number.areaCode;
	num.firstThree=number.firstThree;
	num.lastFour=number.lastFour;		
}
TelNum PhoneBook::getTelNum(){
	return num;
}

//operation overload for input
istream& operator >> (istream &is, Address &A){
	int h_n,zipc;
	string s_n,st,c;
	cout<<"Housenum then zipcode";cin>>h_n>>zipc;
	cout<<"streetname, statename, then city";cin>>s_n>>st>>c;
	A.house_number=h_n;
	A.street_name=s_n;
	A.state=st;
	A.city=c;
	A.zipcode=zipc;
}
void PhoneBook::setAddress(Address a){
	add.house_number=a.house_number;
	add.street_name=a.street_name;
	add.state=a.state;
	add.city=a.city;
	add.zipcode=a.zipcode;
}
Address PhoneBook::getAddress(){
	return add;
}

int main(){
	PhoneBook pages[100];
	char LastName[SIZE];
	char FirstName[SIZE];
	TelNum Num;
	Address Add;
	for(int i=0;i<10;i++){ //change back to 100 (once done testing)
		cin>>LastName;
		pages[i].setLastName(LastName);
		pages[i].getLastName();
		cin>>FirstName;
		pages[i].setFirstName(FirstName);
		pages[i].getFirstName();
		
		cin>>Num;
		pages[i].setNum(Num);
		pages[i].getTelNum();

		cin>>Add;
		pages[i].setAddress(Add);
		pages[i].getAddress();
		
		cout << "you set and geted everything\n";
	}
	cout << "Completed\n";
}


