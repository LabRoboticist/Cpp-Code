//pointer is only in c++
//pointer is dynamic memory allocation (int *y;)
//static memory allocation is done at compile time (int x;)
//new, is an operator that asks the heep for free memeory
//pointer uses, heep = availible memory for the program
//int 
//cout << y //address (address is in hexidecimal value)
//cout << *y //value
//y=&x //makes whatever happens to x happen to y //& reference
//don't need to make something by refernece if that thing (vairable or object) doesn't vhange 
//y = new int;
//y = new int[size];

//meant for operational overloading
const int SIZE=100;
class String{
	private:
		char *str;
	    int len; //length of string
	public:
    //member functions
		String();
		String(char *str2); //strcpy(str,str2);
		int getLength();
		char* getStr();
		void setStr(char *str);
		void setLength(int len);
		String* operator=(String s2); //optional
};

int main(){
    //cariables don't have to be pointers "but we have them so why not use them?"
    char *str1;
    char *str2;
    str1=new char[]
}



String* String::operator=(String s2){
	str=s2.getString();
	return this;
}

/* don't do these
bool operator==(char *str1, char *str2){
	if(strcmp(str1,str2==0){ //might need to #include <cstring>
		return true;
	}
	else return false;
}

bool operator<(char str1, char *str2){ //checking if str1 is less than str2
	if(strcmp(str1,str2)<0)
		return true;
}

bool operator<=(char *str1, char *str2){
	
}
bool operator>=(char *str1, char *str2){
	
}
bool operator>(char *str1, char *str2){
	if(strcmp(str1,str2)>0)
		return true;
}
*/




int main(){
	
	char *str1;
	char *str2;
	str1=new char[MAX];
	str2=new char[MAX];
	cin>>str1>>str2;
	if(str1==str2)
}
*/

overload the +, <, <=, >, >= for the String class

istream& operator>>(istream &is, String &s){
		char *str2;
		str2=new char[MAX];
		is>>str2;
		s.setString(str2);
		return is;		
}

ostream& operator<<(ostream &os, String s){
	os<<s.getString()<<endl;
	return os;
}

bool operator==(String s1, String s2){
	if(strcmp(s1.getString(),s2.getString()==0){
		return true;
	}
	else return false;
}

//check
bool operator<(String s1, String s2){ //checking if str1 is less than str2
	if(strcmp(s1.getString(),s2.getString()) < 0)
		return true;
}

int main(){
	String str1,str2;
	cin>>str1;
	cin>>str2;
	if(str1==str2){
		cout<<"Equal\n";	
	}
	str2=str1; 
	cout<<str2<<endl;
}
/*
int main(){
	int *p;
	int x;
	cout<<"Address of x = "<<&x<<endl;
	int *q;
	cout<<"Input an integer\n";
	cin>>x;
	p=&x;
	cout<<"Address of p = "<<p<<endl;
	cout<<"Value of p = "<<*p<<endl;
	x=120;
	cout<<"Value of p = "<<*p<<endl;
	/*
	p=new int[x];
	for(int i=0;i<x;i++){
		cin>>p[i];
	}
	for(int i=0;i<x;i++){
		cout<<p[i]<<endl;
	}
	
	char *str;
	str=new char[x];
	cin>>str; 
	char *str2;
	str2=str;
	cout<<str2<<endl; //displays entire string
	cout<<*str2<<endl; //displays only the first char in string
	
	
	return 0;
	
}*/