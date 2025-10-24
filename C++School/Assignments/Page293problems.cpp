#include <iostream>
#include <iomanip>
using namespace std;

int Size, choice;
char symbol;


void p1(){ //works

	if(Size>=2 && Size<=9){ // limits
		for(int row=1;row<=Size;row++){
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

void p2(){ //wrong

	if(Size>=2 && Size<=9){ // limits
			for(int row=1;row<=Size;row++){
				for(int col=Size; col<=1;col-row){
					if(row==Size-col){
					cout<<Size;
					}
					else 
					cout<<symbol;
				}
				cout<<endl;
			}
		}

}

void p3(){ //not evene close to working

	int row=9; 
	//int col=Size;

	if(Size>=2 && Size<=9){
		while(row>=Size){
			row--;
			if(int col=Size; col>1){
				col--;
				cout << Size;
			}
			else cout << symbol;
		}
	cout << Size;	//cout << Size;
	}
	//cout << endl;

}

void p4(){ //copy of one
	//replica of p1
	if(Size>=2 && Size<=9){ // limits
		for(int row=1;row<=Size;row++){
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



int main(){

	cout<<"Input size\n";
	cin >> Size;
	cout<<"Input Symbol\n";
	cin>>symbol;
	cout << "Input choice of pattern(as the number corresponding to the pattern).\nPattern 1\nPattern 2\nPattern 3\nPattern 4\n";
	cin >> choice;

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
		default:
			cout << "You did not input a number 1-4. Rerun the program and try again.";
	}

    //problem51p2();
	//p2();

    return 0;
}