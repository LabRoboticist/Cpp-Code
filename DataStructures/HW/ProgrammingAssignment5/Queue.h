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
	if(rear<MAX-1){
		jobs[++rear]=job;
	}
}

//removing from Q
element QueueADT::dequeue(){
	element job;
	if(!empty()){
		//if not empty (add this later)
		job = jobs[front];
		++front;
		//item = data[front++];
		return job;
	}
	else return -1;
}

