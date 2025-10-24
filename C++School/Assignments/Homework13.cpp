#include<iostream>
using namespace std;


//declare the function - prototype
int showMenu();
void handleChoice(int choice);
int getInt(int frontEnd);
void evens(int lowerEnd, int upperEnd);
void primes(int lowerEnd, int upperEnd);
void divBy7(int lowerEnd, int upperEnd);

int main(){
	//invoke functions
	int choice;
	choice=showMenu();
	handleChoice(choice);
	return 0;
}

//function definitions 
int showMenu(){
	int choice;
	cout<<"Press 1 to display all even integers between 2 integers\n"; 
	cout<<"Press 2 to display all prime integers between 2 integers\n";
	cout<<"Press 3 to display all integers divided by 7\n";  
	cin>>choice;
	return choice;
}

void evens(int lowerEnd, int upperEnd){ 
    if((lowerEnd%2)==0){
        cout << "lowerEnd: " << lowerEnd << " is even\n";
    }
    else cout << "lowerEnd: " << lowerEnd << " is not even\n";
    if((upperEnd%2)==0){
        cout << "upperEnd: " << upperEnd << " is even\n";
    }
    else cout << "upperEnd: " << upperEnd << " is not even\n";

}

void primes(int lowerEnd, int upperEnd){ 
    if((lowerEnd%2)==1){
        cout << "lowerEnd: " << lowerEnd << " is prime\n";
    }
    else cout << "lowerEnd: " << lowerEnd << " is not prime\n";
    if((upperEnd%2)==1){
        cout << "upperEnd: " << upperEnd << " is prime\n";
    }
    else cout << "upperEnd: " << upperEnd << " is not prime\n";

}

void divBy7(int lowerEnd, int upperEnd){
    cout << "lowerEnd: " << lowerEnd << " divided by 7 = "<< double(lowerEnd)/7 << "\n";
    cout << "upperEnd: " << upperEnd << " divided by 7 = "<< double(upperEnd)/7 << "\n";
}

void handleChoice(int choice){
	int num1=getInt(1);
	int num2=getInt(2);
	switch(choice){
		case 1: 
            evens(num1,num2);
		    break;
		case 2: 
            primes(num1,num2);
		    break;
        case 3:
            divBy7(num1,num2);
		    break;
		
	}
	
}

int getInt(int frontEnd){
	if(frontEnd==1){
		cout<<"PLease input the lower end of the range\n";
	}
	else if(frontEnd==2){
		cout<<"Please input the upper end of the range\n";
	}
	cin>>frontEnd;
    return frontEnd; 
}



