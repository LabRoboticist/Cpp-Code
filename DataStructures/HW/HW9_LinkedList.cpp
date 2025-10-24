#include "StringHeader.h"

//if head == NULL the linklist is empty

#include<iostream>
using namespace std;


struct node{
	String name;
	double weight;
	node *next;
};

node *head;
node *current;
node *temp;
node *test; //added by me
int count;

void move_current_to_end();

void printLL(){
    while(head->next!=NULL){
        //print out all contents
        current=head; //**********************************************************************8 */
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
	do{
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
			//make sure current is at the last node of the list before adding the new node into the list
			move_current_to_end();
			current->next=temp;
			current=current->next;
			current->next=NULL;
            
			
		}
		
	
	}while(choice==1);
	
	//print all the data in the linked list until NULL is reached
	cout<< "\n\n\n";
    printLL();

	return 0;
}




void move_current_to_end(){
	current=head;
	while(current->next!=NULL){
	
	    current=current->next;
}
}



