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

const int MAX=5; //random int
class OneKeyTableADT{
	private:
		Association data[MAX]; //an array that holds Association objects
		int table_length; 
	public:
		OneKeyTableADT(); 
		OneKeyTableADT(const OneKeyTableADT &okt);
		bool empty();
		int getLength(); //returns the length of the table
		void store(const keyType &target, const element &item); //function overloading 
		void store(Association &target);
		bool remove(const keyType &target, element &item);
		bool remove(Association &target);
		bool retrieve(const keyType &target, element &item);
		bool retrieve(Association &target);
};

OneKeyTableADT::OneKeyTableADT(){
	for(int i=0; i<MAX; i++){
		data[i]=Association();
	}
	//data[MAX]={0}; not that simple
	table_length=0;
}

OneKeyTableADT::OneKeyTableADT(const OneKeyTableADT &okt){
	for(int i=0; i<MAX; i++){
		data[i]=okt.data[i];
	}
	table_length=okt.table_length;
}

bool OneKeyTableADT::empty(){
	if (table_length==0){
		return true;
	}
	else return false;
}

int OneKeyTableADT::getLength(){return table_length;}

bool OneKeyTableADT::remove(const keyType &target, element &item){ 
	int first, last, middle;
	keyType key;
	bool success = false;

	first = 0;
	last = table_length-1; 
	//search algorithm
	while((first<=last) && !success){
		middle = (first+last)/2;
		key = data[middle].getKey();
		if (key==target){
			success=true;
		}
		else if(key>target){
			last=middle-1;
		}
		else first=middle+1;
	}
	if (success) data[middle].setValue(0); 
	return success;
}

bool OneKeyTableADT::remove(Association &target){
	int first, last, middle;
	keyType key; 
	keyType targetKey=target.getKey();
	element targetVal=target.getValue();
	bool success = false;

	first = 0;
	last = table_length-1; 
	//search algorithm
	while((first<=last) && !success){
		middle = (first+last)/2;
		key = data[middle].getKey();
		if (key==targetKey){
			success=true;
		}
		else if(key>targetKey){
			last=middle-1;
		}
		else first=middle+1;
	}
	if (success) data[middle].setValue(0);
	return success;	
}

bool OneKeyTableADT::retrieve(Association &target){
	int first, last, middle;
	keyType key; 
	keyType targetKey=target.getKey();
	element targetVal=target.getValue();
	bool success = false;

	first = 0;
	last = table_length-1; 
	//search algorithm
	while((first<=last) && !success){
		middle = (first+last)/2;
		key = data[middle].getKey();
		if (key==targetKey){
			success=true;
		}
		else if(key>targetKey){
			last=middle-1;
		}
		else first=middle+1;
	}
	if (success) targetVal=data[middle].getValue();
	return success;	
}


bool OneKeyTableADT::retrieve(const keyType &target, element &item){ 
	int first, last, middle;
	keyType key;
	bool success = false;
  
	first = 0;
	last = table_length-1; 
	//search algorithm
	while((first<=last) && !success){
		middle = (first+last)/2;
		key = data[middle].getKey();
		if (key==target){
			success=true;
		}
		else if(key>target){
			last=middle-1;
		}
		else first=middle+1;
	}
	if (success) item=data[middle].getValue();
	return success;
}



void OneKeyTableADT::store(const keyType &target, const element &item){
	int probe=0;
	bool found=false;
	keyType key;
	

	while((probe<table_length) && !found){
		key=data[probe].getKey();
		if (key >= target) found=true;
		else ++probe; 
	}
	if (found && (key==target)){
		data[probe].setValue(item);
	}
	else{
		assert(table_length<MAX);//from new library
		for(int i=table_length; i>probe; --i){
			data[i]=data[i-1];
		}
		Association a;
		a.setKey(target);
		a.setValue(item); 
		data[probe]=a; //put in a, into the data array
		++table_length;
	}
}

void OneKeyTableADT::store(Association &target){
	int probe=0;
	bool found=false;
	keyType key;
	keyType targetKey=target.getKey();
	element targetVal=target.getValue();
	
	while((probe<table_length) && !found){
		key=data[probe].getKey();
		if (key >= targetKey) found=true;
		else ++probe; 
	}
	if (found && (key==targetKey)){
		data[probe].setValue(targetVal);
	}
	else{
		assert(table_length<MAX);//from new library
		for(int i=table_length; i>probe; --i){
			data[i]=data[i-1];
		}
		Association a;
		a.setKey(targetKey);
		a.setValue(targetVal);
		data[probe]=a; //put in a, into the data array
		++table_length;
	}
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




