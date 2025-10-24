#include<iostream>
using namespace std;

typedef int element;
const int MAX=10;


//last in first out
//chapter on Stacks = Page 205

typedef int element;
class StackADT{
	private:
		element data[MAX];
		int topIndex;
	public:
		StackADT();
		StackADT(StackADT &R);
		int onTop(); //returns topIndex
		bool empty();
		void push(element item);
		element pop();
	
};

StackADT::StackADT(){
	topIndex=-1;
}

StackADT::StackADT(StackADT &R){
	//coping R onto the StackADT executing this function
	topIndex=R.topIndex;
	for(int i=0; i<=topIndex; i++){ //topindex == the highest number in index
		data[i]=R.data[i];
	}
}

int StackADT::onTop(){
	return topIndex; 
}

// Check if the stack is empty
bool StackADT::empty(){
    return topIndex == -1;
}

void StackADT::push(element item){ //insert item into list
	data[++topIndex]=item;
	//if starting, data[0]=item (item = argument from user)	
}


element StackADT::pop(){ //taking off of top
	if(!empty()) return data[topIndex--]; //check if it is empty or (!empty())
	else{
		cout << "Failed to pop!\n"; 
		return 0; //means a failed atempt
	}
}


int main(){
	//HW: Place S onto R and then display the contents of the resulting Stack in the reverse order
	StackADT S;
	//cout << "The top index of StackADT S is..." << S.onTop() << "\n";
	StackADT R;
	int Slength=0;
	int choice;
	bool Continue=true;
	do{
	cout 
	<< "1) Insert length of Stack S\n"
	<< "2) Display Stack S (before)\n"
	<< "3) Display Stack R (After it is reverse)\n";
	cin>>choice;
		switch (choice){
			case 1:
				cout << "Type in the length of Stack S. " << endl;
				cin>>Slength; 
				for(int i=0; i<Slength; i++){ //check
					S.push(i);
				}
				break;
			case 2:
				//output Stack S
				cout << "Stack (S) before.\n";
				while (!S.empty()){ //while Stack R is not empty
					cout << S.pop() << "\n";
				}
				break;
			case 3:
				//Reverses order in R
				while (!S.empty()){ //while Stack S is not empty
					R.push(S.pop()); //intert S's popped out elements into R
				}
			
				//output Stack R
				cout << "Resulting Stack (R) in reverese order.\n";
				while (!R.empty()){ //while Stack R is not empty
					cout << R.pop() << "\n";
				}
				break;
			default: cout << "Chose one of the provided choices\n";
		}
		cout << "Continue? (true=1 or false=0)\n"; //just easier
		cin >> Continue;
	} while(Continue==true);
	return 0;
}
