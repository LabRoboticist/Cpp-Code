
const int SIZE=100;
class String{
	private:
		char str[SIZE];
	    int len; //length of string
	public:
		String();
		String(char str2[]);
		int getLength();
		char* getStr();
		void setStr(char str3[]);
		void setLength(int len2);
};

//check 
//default constructor
String::String(){
	str[SIZE]={0};
	len=0;
}
//check
String::String(char str2[]){
	str[SIZE]=str2[];
}
int String::getLength(){return len;}
char* String::getStr(){return str[SIZE];}
void String::setStr(char stri[]){str[SIZE]=stri[];}
void String::setLength(int leng){len=leng;}



typedef int element;
typedef String keyType;
class Association {
	private:
		keyType key;
		element value;
	public:
		AssociationADT();
		void setKey(keyType kee);
		void setValue(element item);
		keyType getKey();
		element getValue();		
};

Association::Association(){
	key.setStr("Empty");
	key.setLength(5);
	value=-100;
}
void Association::setKey(keyType kee){key=kee;}
void Association::setValue(element item){value=item;}
keyType Association::getKey(){return key;}
element Association::getValue(){return value;}	





int main{
	cout << "something";
}