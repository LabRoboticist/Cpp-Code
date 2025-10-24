#include <iostream>
using namespace std;

//linear
//faster/more efficient (than both bubble sort and selection sort)
//each bin can hold up to nine numbers
//numbers that end in six go to bin six
//total number of passes will = list[SIZE] -SIZE-`
//counter for each bin an array of counters (++counter every time an item is put in a bin

//modulo(%10) can find the first digit (first_dig=list[i]%10)
//pass 1 = fist dig 156(7) 

//inbetween paasses copy items from all bins back to list then clear all bins

//(list[i]/10)%10 //divide by ten then find first dig again 
//
//(list[i]/1000)%10 == thousands place (pass 4)
//still empty bin after

//to empty bins, set to null terminator or setting all counterrs to 0 (up to me
//swtich statment function that takes in the pass int (4 swich statment))


const int SIZE=9;


void getnum4list(int list[]){
	cout<<"Input "<<SIZE<<" number of integers with 4 digits each\n";
	for(int i=0;i<SIZE;i++){
		cin>>list[i];
	}
}

void DisplayList(int list[]){
	cout << "\nThe contents of the list are...\n";
	for(int i=0;i<SIZE;i++){
		cout<<list[i]<<'\n';
	}
}

//Only answer this question and do the next sentence! Why does this function not work? Make this function work.
void Displaybins(int bins[10][SIZE]){
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
// void Board::displayBoard() {
// 	for (int i = 0; i < ROWS; ++i) {
// 		for (int j = 0; j < COLS; ++j) {
// 			cout << grid[i][j];
// 			if (j < COLS - 1) cout << "|";
// 		}
// 		cout << endl;
// 		if (i < ROWS - 1) cout << "-----\n";
// 	}
// }


void List2bins(int list[], int counter[], int bins[10][SIZE], int pass){ 
	int digit;
	for(int i=0;i<SIZE;i++){
		digit=(list[i]/pass)%10;
		bins[digit][counter[digit]++]=list[i];
		//list into bin
	}
}


void Copybins2list(int list[],int counter[],int bins[10][SIZE]){ 
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
void Emptybins(int counter[], int bins[10][SIZE]){
	//set counter to equal zero
	for(int i=0;i<10;i++){
		counter[i]=0; //counter for each = 0
	}
	// //actually empty bin
	// for (int f=0; f<10; f++){ //row (x)
	// 	for(int s=0; s<SIZE; s++){ //colum (y)
	// 		cout << bins[f][s] << 0;
	// 	}
	// }
}




void radixSort(int list[], int counter[], int bins[][SIZE]) {
	int pass=1; //4 digits = 4 passes //start at ones place
    for (int i = 0; i < 4; i++) {
        Emptybins(counter, bins); // Empty the bins at the start of each pass
        List2bins(list, counter, bins, pass); // Put numbers into bins based on the current digit
        Copybins2list(list, counter, bins); // Copy the numbers back to the list
		DisplayList(list);
		Displaybins(bins);
		pass*=10;
    }
}

int main(){ //no digit
	int list[SIZE]; //the input/data being sorted
	int bins[10][SIZE] ={0};
	//int digit; //first dimenstion of matrix bins
	int counter[10] = {0}; //a counter for each item in bin

	//first position of the matrix of digitnum
	//ex = 5897 [7] position 0 ?
	getnum4list(list);
	radixSort(list,counter, bins);
	cout << "\n\n";


	return 0;
}

