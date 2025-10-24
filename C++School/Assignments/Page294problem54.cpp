#include <iostream>
#include <iomanip>
#include <iomanip>
using namespace std;

int Size, choice;
char symbol='$';


void p1(){ 

	if(Size>=2 && Size<=9){ // limits
		for(int row=1;row<=Size;row++){ //iterating
			for(int col=1; col<=Size;col++){
				if(row==col){
					cout<<Size;
				}
				else cout<<symbol;
			}
			cout<<endl;
		}
	}
}

void p2(){ 

	if(Size>=2 && Size<=9){ // limits

		for (int row = 0; row < Size; row++) {
			// Print leading symbols
			for (int col = 0; col < Size- row - 1; col++) {
				cout << symbol;
			}

			// Print the number Size
			cout << Size;

			// Print trailing Symbols
			for (int col= 0; col < row; col++) {
				cout << symbol;
			}

			// Move to the next line
			cout << endl;
		}
    }
}

void p3(){ 

	if(Size>=2 && Size<=9){ // limits
		for (int row = 0; row < Size; row++) {
			// Print leading symbols
			for (int col = 0; col < Size- row - 1; col++) {
				cout << symbol;
				
			}

			// ugly but works
			// if(row==0 || row==1 || row==2 || row==3 || row==4 || row==5 || row==6 || row==7 || row == 8){
			if (row >= 0  && row <= 8){
				cout << symbol;
			}
			else cout << Size;


			// Print trailing Size number
			for (int col= 0; col < row; col++) {
				cout << Size;
			}

			// Move to the next line
			cout << endl;
		}
    }
}

void p4() {

	if(Size>=2 && Size<=9){ 
		for (int row = 1; row <= Size; ++row) { 
			// Print Size
			for (int col = 1; col < row; ++col) { 
				cout << Size; 
			}
			// Print trailing Symbols
			for (int col = row; col < Size + 1; ++col) { 
				cout << symbol; 
			}
			cout << endl; 
		}
	}
}


int main(){

	cout << "\n\n";
	cout << setw(19) << "M" << setw(2) << "E" << setw(2) << "N" << setw(2) << "U" << "\n\n";	
	cout << setw(30) << "1. Pattern One\n"; //(setw() default) in orientation to final character 
	cout << setw(30) << "2. Pattern Two\n";
	cout << setw(32) << "3. Pattern Three\n";
	cout << setw(31) << "4. Pattern Four\n";
	cout << setw(23) << "5. Quit\n";

	cout << "\nEnter Option (1 to 5): ";
	cin >> choice;
	if (choice == 5) return 0; //stops int main() prematurely

	while(choice < 1 || choice > 5){
		cout << "Option incorrect. Try Again.";
		cout << "\nEnter Option (1 to 5): ";
		cin >> choice;
	}

	cout << "Enter pattern size (2 to 9): ";
	cin >> Size;
	while(Size < 2 || Size > 9){
		cout << "Pattern size incorrect. Try Again.";
		cout << "\nEnter pattern size (2 to 9): ";
		cin >> Size;
	}
		
	switch(choice){
		case 1:
			p1();
			break;
		case 2:
			p2();
			break;
		case 3:
			p3();
			break;
		case 4:
			p4();
			break;
	}

    return 0;
}