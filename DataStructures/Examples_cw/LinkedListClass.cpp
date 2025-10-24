#include "StringHeader.h"

//#include<iostream> //testing If stuff worng, uncomment**********************
using namespace std;

//while(temp->name is not less than Perssnom->name)
struct node{
	String name;
	double weight;
	node *next;
};

node *head;
node *current;
node *temp;
node *previous; //added because teacher
int count;
int caseNum;

void move_current_to_end();

void printLL(){
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


int main(){
	int choice;
	head=NULL;
	current=NULL;
	temp=NULL;
		cout<<"Input a new person in list?\n";
		cout<<"Press 1 for yes\n";
		cin>>choice;
		if(choice==1){
			temp=new node;
			cout<<"Input name\n";
            count++;//added

			cin>>temp->name;
			cout<<"Input person's weight\n";
			cin>>temp->weight;
            count++; //added
			head=temp;
			current=head;
			head->next=NULL;
			
		}
	do{ //adding to the endo of the link list?
		cout<<"Input a new person in list?\n";
		cout<<"Press 1 for yes\n";
		cin>>choice;
		if(choice==1){
			temp=new node;
			cout<<"Input name\n";
			cin>>temp->name;
            count++;//added
			cout<<"Input person's weight\n";
			cin>>temp->weight;
            count++;//added
			Insert_Node();
		}
	}while(choice==1);
	
	return 0;
}

void Insert_Node(){
	// int caseNum;
	String newPerson;
	//store
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

void move_current_to_end(){
	current=head;
	while(current->next!=NULL){
		previous=current; //set previous to current's position
	    current=current->next; //then current gets put begind itself
	}
}


//***************************************************************** */
//Homework 11
//Dlete function fully written
//Do not to have the full clas by thursday
//*********************************************************** */
void Remove(){
	String unlikedPerson;
	cin>>temp->name; // tkae in input for the name part of the node temp
	unlikedPerson=temp->name; //unlikedPerson = that input

	//if first name assosiated to node in linked in list
	//Abby=unlikedPerson
	current=head;//current= the partt mocving around

	if(unlikedPerson==head->name){ //malkes sense
		head=current->next; 
		current=head; //reseting it to be begging of linked list
		// head=current->next;
		// current=head;
	}
	else{
		//end of list
		move_current_to_end();
		if(unlikedPerson==current->name){
			current=previous; //move current right before were it used to be
			current->next=NULL; //make current the end of the list

			// previous->next=current->next;//skips current (on purpose)
			// current=previous; //make current the previous node
			// current->next=Null; //make current the end of linked list
		}
		
		else {
			//in betweeen //help
			// bool success=false;
			// current=head; //set to beginigng to list
			// while(current->next!=NULL && !(current->name<unlikedPerson && current->next->name > unlikedPerson) && !success){
			// 	current=current->next;
			// }
			// previous->next=current;
			// previous->next=current->next;
			// current=previuos;

			//in betweeen //help
			bool success=false;
			current=head; //set to beginigng of list
			while(current!=NULL && !success){ //if success is not true
				if(current->name==unlikedPerson){
					success=true; //becuase found
				}
				else{
					//iterate list to next position, to the left by one
					success=false; //because not found
					previuos=current; //previous to current's position
					current=current->next; //set current to behind it self //now previus is actually ahead of current
				}
			}
			if(success){ //once success is true {which = found}
				//have her check
				previous=current->next; //previus is put right behind current
				current=previous; //set current to previous, right before it
			}


		}
	}
}
