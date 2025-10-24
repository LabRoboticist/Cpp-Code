#include "StringHeader.h"

#include<iostream> 
using namespace std;

//while(temp->name is not less than Perssnom->name)
struct node{
	String name;
	double weight;
	node *next;
};

//ADT (no getter or setter functions)
class LinkedListADT{
	private:
		node *head;
		node *current;
		node *temp;
		node *previous; 
		int count;
	public:
		LinkedListADT(); //create = (no new function) constructor, where head = new node, current = new node (just initailaizing the linked list)
		void move_current_to_end();
		void printLL(); //Print Linked LIst
		void Insert_Node(); //Store
		bool Remove(); 
		bool empty();
		bool Retrieve(); //Chnage
		//page 157 = Remove and Retrieve function defs
};

void UI(); //User Interface

bool LinkedListADT::empty(){
	if(head==NULL){ //that is what it is intialy sent to
	return true;
	}
	else return false;
}


//create operator 
LinkedListADT::LinkedListADT(){ 
	//setting the address for each node to NULL;
	head=NULL;
	current=NULL;
	temp=NULL;
	previous=NULL;
	count=0; //might not need to be here
}

void UI(){
	int choice;
	LinkedListADT list;
	bool Continue=true; //continue (lower case) is a reserved key word in C++, don't use it!!!
	do{
		cout
		<<" (1 Create a Linked List.\n"
		<<" (2 Check to see if Linked List is empty.\n"
		<<" (3 Store a new node into the Linked List.\n" //Insert_Node();
		<<" (4 Remove node from Linked List.\n"
		<<" (5 Retrieve node from Linked List.\n"
		<<" (6 Quite\n";
		cin>>choice;
		if(choice==1){
			LinkedListADT listnew;
		}
		else{
			switch(choice){
				case 2:
					if(list.empty() == true){
						cout<< "list is empty\n";
					}
					else cout << "list is not empty\n";
					break;
				case 3:
					list.Insert_Node(); //asks for input in function
					break;
				case 4:
					if(list.Remove() == true){
						cout<< "node is removed\n";
					}
					else cout << "node is not removed\n";
					break;
				case 5:
					if(list.Retrieve() == true){
						cout<< "node is retrieved\n";
					}
					else cout << "node is not retrieved\n";
					break;
				case 6:
					Continue=false;
					break;
				default:
					cout << "Try following instructions." << endl;
			}
		}
	} while(Continue==true);
		
}

void LinkedListADT::printLL(){
    while(head->next!=NULL){
        //print out all contents
        current=head; 
        for(int i=count; i!=0; i-=2){
            cout << current->name << "\n";
            cout << current->weight << "\n";
            current=current->next;
            cout << "\n";  
        }
        head->next=NULL;
        
    }
}

void LinkedListADT::Insert_Node(){ //=store?
	int caseNum=0;
	String newPerson;
	cout << "Type in the name of the node you want to enter.";
	cin>>temp->name;
	newPerson=temp->name;
	if(head==NULL){
	//list is empty
	}
	else {
		if(newPerson<head->name){
			//insert before head
			current=head; //current = head's address
			previous->next=current;//previous's next= currents's address

			caseNum=1;
		}
		else {
			move_current_to_end();
			if(newPerson>current->name){
				//insert at end of list
				//make sure current is at the last node of the list before adding the new node into the list
				current->next=temp;
				current=current->next;
				current->next=NULL;
				caseNum=3;
			}
			else {
				//insert in between 2 nodes
				//suggested code by teacher
				bool success=false;
				while(current->next!=NULL && !(current->name<newPerson && current->next->name > newPerson) && !success){
					current=current->next;
				}
				caseNum=2;
			}		
		}
	}


	switch(caseNum){
		//~(each comment on the cases are descriptions not direction. They already do that;)
		case 1: //add before head; 
			break;
		case 2: //insert in between but where?
		 	break;		
		case 3: //add to end of list
		 	break;
		
	}
}

void LinkedListADT::move_current_to_end(){
	current=head;
	while(current->next!=NULL){
		previous=current; //set previous to current's position
	    current=current->next; //then current gets put begind itself
	}
}





bool LinkedListADT::Remove(){ //if remove succesflu then return true, else return false
	String unlikedPerson;
	cout << "Input name of node you wish to remove.\n";
	cin>>temp->name; // take in input for the name part of the node temp
	unlikedPerson=temp->name; //unlikedPerson = that input

	//if first name assosiated to node in linked in list
	//Abby=unlikedPerson
	current=head;//current= the partt mocving around
	if(unlikedPerson==head->name){ //malkes sense
		head=current->next; 
		current=head; //reseting it to be begging of linked list
		return true;
	}
	else{
		//end of list
		move_current_to_end();
		if(unlikedPerson==current->name){
			current=previous; //move current right before were it used to be
			current->next=NULL; //make current the end of the list
			return true;
		}
		else {	
			bool success=false;
			current=head; //set to beginigng of list
			while(current!=NULL && !success){ //if success is not true
				if(current->name==unlikedPerson){
					success=true; //becuase found
				}
				else{
					//iterate list to next position, to the left by one
					success=false; //because not found
					previous=current; //previous to current's position
					current=current->next; //set current to behind it self //now previus is actually ahead of current
				}
			}
			if(success){ //once success is true {which = found}
				previous=current->next; //previus is put right behind current
				current=previous; //set current to previous, right before it
				return true;
			}
		}
	}
	return false; //returns false by default becuase if none of the other conditions are meet nothing was removed
}

bool LinkedListADT::Retrieve(){
	//only has to inform user if taret is found
	String target; //target name
	cout << "Input name of node you wish to retrieve.\n";
	cin>>temp->name; // take in input for the name part of the node temp
	target=temp->name; 

	current=head;//current=the part moving around
	//beggining of list
	if(target==head->name){ 
		return true;//found
	}
	else{
		//end of list
		move_current_to_end();
		if(target==current->name){
			return true; //found
		}
		else {	
			bool success=false;
			current=head; //set to beginigng of list
			while(current!=NULL && !success){ //if success is not true
				if(current->name==target){
					success=true; //becuase found
				}
				else{
					//iterate list to next position, to the left by one
					success=false; //because not found
					previous=current; //previous to current's position
					current=current->next; //set current to behind it self //now previus is actually ahead of current
				}
			}
			if(success){ //once success is true 
				return true; //found
			}
		}
	}
	return false; //returns false by default becuase if none of the other conditions are meet nothing was removed
}


int main(){
	UI();
	return 0;
}