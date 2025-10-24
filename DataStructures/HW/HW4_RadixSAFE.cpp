#include <iostream>
using namespace std;

const int SIZE=9;
int list[SIZE]; //the input/data being sorted
int bins[10][SIZE] ={0};
int counter[10] = {0}; //a counter for each item in bin

//big-O is the upper bound of the code (in this case radix sort)
//4n //not important
//o(n)

void getnum4list(){
	cout<<"Input "<<SIZE<<" number of integers with 4 digits each\n";
	for(int i=0;i<SIZE;i++){
		cin>>list[i];
	}
}

void DisplayList(){
	cout << "\nThe contents of the list are...\n";
	for(int i=0;i<SIZE;i++){
		cout<<list[i]<<'\n';
	}
}

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
		bins[digit][counter[digit]++]=list[i]; //list into bin
	}
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
}

//empty bins = $(counter=0)
void Emptybins(){
	for(int i=0;i<10;i++){
		counter[i]=0; //counter for each = 0
	}
}

void radixSort() {
	int pass=1; //4 digits = 4 passes //start at ones place
    for (int i = 0; i < 4; i++) {
        Emptybins(); // Empty the bins at the start of each pass
        List2bins(pass); // Put numbers into bins based on the current digit
        Copybins2list(); // Copy the numbers back to the list
		DisplayList();
		Displaybins();
		pass*=10;
    }
}

int main(){
	getnum4list();
	radixSort();
	cout << "\n\n";
	return 0;
}

