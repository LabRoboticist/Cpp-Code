#include <iostream>
using namespace std;

//page 232 = page with useful info

//FiFO (first in first out)
const int MAX =10;
typedef int element;

class QueueADT{
	private:
		element jobs[MAX];
		int front;
		int rear;

	public:
		
		QueueADT();	
		bool empty();
		element at_front(); //returns element at the front of Q
		void enqueue(element job);
		element dequeue();
};

QueueADT::QueueADT(){
	front=0;
	rear=-1; //empty Q
}

bool QueueADT::empty(){
	//if nothing was put in
	if(rear<front) return true;  //hits default constructor (which set to this by default) 
	else return false;
}

element QueueADT::at_front(){return front;}

//inserting into Q (Q is an array)
void QueueADT::enqueue(element job){
	//if not full (add this later)
	jobs[++rear]=job;
}

//removing from Q
element QueueADT::dequeue(){
	element job;

	//if not empty (add this later)
	job = jobs[front];
	++front;
	//item = data[front++];
	return job;
}

//Finish writing the implementations of the remaining member functions
//Instantiate the Queue class in main and test your functions using enqueue and dequeue

int main(){
	QueueADT Test;
	int Qlength=0;
	cout << "Type in length of Queue. " << endl;
	cin>>Qlength;
	//fill up Test Queue then check if empty
	for(int i=0; i<Qlength; i++){ //check
		Test.enqueue(i);
	}
	if (!Test.empty()) cout << "Test Queue not empty.\n\n";
	else cout << "Test Queue is empty.\n\n";

	//clear out Test Queue then check if empty
	while(!Test.empty()){
		cout << Test.dequeue() << "\n";
	}
	if (!Test.empty()) cout << "Test Queue not empty.\n";
	else cout << "Test Queue is empty.\n";
	return 0;
}
