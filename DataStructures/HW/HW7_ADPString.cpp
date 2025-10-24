#include "StringHeader.h" //my personal header file I made
#include <cassert>
#include <iostream>

typedef int element;
typedef String keyType;
class Association{
	
	private:
		keyType key; //string
		element value; //int
	public:
		Association();
		void setKey(keyType kee);
		void setValue(element item);
		keyType getKey();
		element getValue();
		
};



void Association::setKey(keyType kee){key=kee;}
void Association::setValue(element item){value=item;}
keyType Association::getKey(){return key;}
element Association::getValue(){return value;}

Association::Association(){
	key = "Empty";
	value=-100;
}





int main(){
	Association a;
	String str;
	int n;
	cout << "Please provide your name\n";
	cin >> str;
	cout << "Please provide your weight\n";
	cin >>n;
	a.setKey(str);
	a.setValue(n);

}





