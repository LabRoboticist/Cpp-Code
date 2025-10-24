#include <iostream>
#include<stdio.h>
using namespace std;



const int SIZE=9;
//int list[SIZE]; //the input/data being sorted
int list[SIZE] = {23, 45, 12, 54, 65, 36, 68, 34, 95};
int bins[10][SIZE] ={0};

int counter[10] = {0}; //a counter for each item in bin

void getnum4list(){
	cout<<"Input "<<SIZE<<" number of integers with 4 digits each\n";
	for(int i=0;i<SIZE;i++){
		cin>>list[i];
	}
}

//good
void DisplayList(){
	cout << "\nThe contents of the list are...\n";
	for(int i=0;i<SIZE;i++){
		cout<<list[i]<<'\n';
	}
}

//Only answer this question and do the next sentence! Why does this function not work? Make this function work.
void Displaybins(){
	cout << "\nThe contents of the bins are...\n";
	for (int f=0; f<10; f++){ //row (x)
		for(int s=0; s<SIZE; s++){ //colum (y)
			cout << bins[f][s] << "|";
		}
		cout << "\n";
		for (int r=0; r<SIZE; r++) cout << "----";
		cout << "\n";
	}
	
	
}



void List2bins(int pass){ 
	int digit;
	for(int i=0;i<SIZE;i++){
		digit=(list[i]/pass)%10; 
		cout << "***digit***" << digit << endl;
		// bins[digit++][counter[digit]]=list[i]; //weirdo
		bins[digit][counter[digit]++]=list[i];
	}					//colums
	//[counter[digit]++]
}


void Copybins2list(){ 
	//copying items from bin into list
	int k=0;
	for(int i=0;i<10;i++){
		for(int j=0;j<counter[i];j++){
			list[k++]=bins[i][j]; //collecting the numbers from the bins and putting them back into list
			//k++;
		}
	}
	//return list[]
}

//empty bins = $(counter=0)
void Emptybins(){
	//set counter to equal zero
	for(int i=0;i<10;i++){
		counter[i]=0; //counter for each = 0
	}

}




void radixSort() {
	int pass=1; //4 digits = 4 passes //start at ones place
    for (int i = 0; i < 2; i++) {
		cin.get(); //enter key input
        Emptybins(); // Empty the bins at the start of each pass
        List2bins(pass); // Put numbers into bins based on the current digit
        Copybins2list(); // Copy the numbers back to the list
		DisplayList();
		Displaybins();
		pass*=10;
    }
}

int main(){ //no digit
	
	//getnum4list();
	//radixSort();
	DisplayList();
	List2bins(10);
	Displaybins();
	DisplayList();
	cout << "Real size  of List" << (sizeof(list)/sizeof(list[0]));

	cout << "\n\n\n\n\n";

	Copybins2list();
	DisplayList();
	cout << "Real size  of List" << (sizeof(list)/sizeof(list[0])) << endl;
	
	// Displaybins();
	// DisplayList();
	// cout << "\n\n";

	radixSort();


	return 0;
}

